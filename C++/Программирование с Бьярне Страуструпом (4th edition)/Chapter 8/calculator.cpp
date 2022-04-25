// #include "token.h"                      // doesn't work
#include "token.cpp"                 // works

Token_stream ts;                        // Предоставляет get () и putback ()
Symbol_table st;                        // Позволяет создавать и изменить переменные
double expression (Token_stream&);      // Объявление для использования
                                        // в функции primary (ts)

double calc_sqrt (Token_stream& ts) {                   // Квадратный корень
    Token t = ts.get ();
    if (t.kind != '(') error ("требуется '('");
    double d = expression (ts);
    if (d < 0) error ("sqrt: отрцитальное значение невозможно");
    t = ts.get ();
    if (t.kind != ')') error ("требуется ')'");
    return sqrt (d);
}

double calc_pow (Token_stream& ts) {                    // Степень
    Token t = ts.get ();
    if (t.kind != '(') error ("требуется '('");
    double base = expression (ts);
    t = ts.get ();
    if (t.kind != ',') error ("',' пропущен");
    int power = narrow_cast <int> (expression (ts));
    t = ts.get ();
    if (t.kind != ')') error("')' пропущен");
    return pow (base, power);
}

double calc_sin (Token_stream& ts) {                    // Синус
    Token t = ts.get ();
    if (t.kind != '(') error ("требуется '('");
    double d = expression (ts);
    t = ts.get ();
    if (t.kind != ')') error ("требуется ')'");
    if (d == 90 || d == 270) return 1;
    if (d == 0 || d == 180) return 0;
    return sin (d * 3.1415926535 / 180);
}

double calc_cos (Token_stream& ts) {                    // Косинус
    Token t = ts.get ();
    if (t.kind != '(') error ("требуется '('");
    double d = expression (ts);
    t = ts.get ();
    if (t.kind != ')') error ("требуется ')'");
    if (d == 0 || d == 180) return 1;
    if (d == 90 || d == 270) return 0;      // return 0 instead of 8.766e-11
    return cos (d * 3.1415926535 / 180);
}

// Упражнение 2
double handle_variable (Token_stream& ts, Token& t)
{
    Token t2 = ts.get ();
    if (t2.kind == '=') return st.set_value (t.name, expression (ts));
    else {
        ts.putback (t2);
        return st.get_value (t.name);       // missing in text!
    }
}

// Работа с числами и скобками
double primary (Token_stream& ts) {
    Token t = ts.get ();
    switch (t.kind) {
        case '(': {
            double d = expression (ts);
            t = ts.get ();
            if (t.kind != ')') error ("требуется ')");
            return d;
        }
        case '{': {
            double d = expression (ts);
            t = ts.get ();
            if (t.kind != '}') error ("требуется ')");
            return d;
        }
        case number: return t.value;
        case name: return handle_variable (ts, t);
        case '-': return - primary (ts);
        case '+': return primary (ts);
        case square_root: return calc_sqrt (ts);
        case exponent: return calc_pow (ts);
        case c_sin: return calc_sin (ts);
        case c_cos: return calc_cos (ts);
        default: error ("требуется первичное значение");
    }
}

double secondary (Token_stream& ts) {       // Работа с !
    double left = primary (ts);
    Token t = ts.get();

    while (true) {
        switch (t.kind) {
            case '!':
                if (left == 0) return 1;
                for (int i = left - 1; i > 0; --i) left *= i;
                t = ts.get();
                break;
            default:
                ts.putback(t);
                return left;
        }
    }
}

// Работа с *, / и %
double term (Token_stream& ts) {
    double left = secondary (ts);
    Token t = ts.get ();                // Получаем следующую лексему
    while (true) {
        switch (t.kind) {
            case '*':
                left *= secondary (ts);
                t = ts.get ();
                break;
            case '/': {
                double d = secondary (ts);
                if (d == 0) error ("деление на нуль");
                left /= d;
                t = ts.get ();
                break;
            }
            case '%': {
                // double d = primary (ts);
                // if (d == 0) error ("%: деление на нуль");
                // left = fmod (left, d);
                int i1 = narrow_cast <int> (left);
                int i2 = narrow_cast <int> (primary (ts));
                if (i2 == 0) error ("%: деление на нуль");
                left = i1 % i2;
                t = ts.get ();
                break;
            }
            default:
                ts.putback (t);         // Возврат t в поток лексем
                return left;
        }
    }
}

// Работа с + и -
double expression (Token_stream& ts) {
    double left = term (ts);              // Считываем и вычисляем Терм
    Token t = ts.get ();                // Получаем следующую лексему
    while (true) {
        switch (t.kind) {
            case '+':
                left += term (ts);        // Вычисляем Терм и суммируем
                t = ts.get ();
                break;
            case '-':
                left -= term (ts);        // Вычисляем Терм и вычитаем
                t = ts.get ();
                break;
            default:
                ts.putback (t);         // Возврат t в поток лексем
                return left;            // Конец: символов + и - нет;
                                        // возвращаем ответ
        }
    }
}

double declaration (Token_stream& ts) {
    // Считаем, что мы уже встретили ключевое слово "let "
    // Обра батываем: Имя = Выражение
    // Объявление переменной с Именем с начальным значением,
    // заданным Выражением

    Token t = ts.get ();
    if (t.kind != name) error ("в объявлении ожидается имя переменной");
    string var_name=  t.name;

    Token t2 = ts.get ();
    if (t2.kind != '=') error ("пропущен символ '=' в объявлении ", var_name);

    double d = expression (ts);
    st.define_name (var_name, d);
    return d;
}

double statement (Token_stream& ts) {
    Token t = ts.get ();
    switch (t.kind) {
        case let: return declaration (ts);
        default:
            ts.putback (t);
            return expression (ts);
    }
}

// Основной цикл и обработка ошибок
void clean_up_mess () {         // Наивное решение
    ts.ignore (print);
}

void print_help()
{
    cout << "Simple Calculator Manual\n"
         << "========================\n"
         << "This calculator program supports +, -, *, and / operations\n"
         << "Enter any form of compound statement followed by ';' for result\n"
         << "- ex: 4 + 1; (5-2)/{6*(8+14)}\n"
         << "The modulo operator % may be used on all numbers\n"
         << "An '!' placed after a value will calculate the factorial of it\n"
         << "- ex: 4! = 4 * 3 * 2 * 1\n"
         << "Square root and exponentiation are provided by 'sqrt' and 'pow'\n"
         << "- ex: sqrt(25) = 5, pow(5,2) = 25\n"
         << "Variable assignment is provided using the 'let' keyword:\n"
         << "- ex: let x = 37; x * 2 = 74; x = 4; x * 2 = 8\n\n";
}

void calculate () {
    try {
        while (cin && cout << prompt) {
            Token t = ts.get ();
            while (t.kind == print) t = ts.get ();  // Удаление вывода
            if (t.kind == help) print_help ();
            else if (t.kind == quit) return;
            else {
                ts.putback (t);
                cout << result << statement (ts) << '\n';
            }
        }
    } catch (exception& e) {
        cerr << e.what () << '\n';
        clean_up_mess ();
    }
}


int main () {
    try {
        // Предопределенные имена
        st.define_name ("pi", 3.1415926535, true);
        st.define_name ("e", 2.7182818284, true);

        cout << "Simple Calculator (type ? for help)\n";

        calculate ();
        return 0;
    } catch (exception& e) {
        cerr << e.what () << '\n';
        // keep_window_open ("~~");
        return 1;
    } catch (...) {
        cerr << "исключение \n";
        // keep_window_open ("~~");
        return 2;
    }
}
