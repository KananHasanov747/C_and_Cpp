/*
Грамматика:

Вычисление:
    Инструкция
    Вывод
    Выход
    Вычисление Инструкция

Инструкция:
    Объявление
    Выражение

Вывод:
    ;

Выход:
    q

Объявление:
    "let" name "=" Выражение

Выражение:
    Терм
    Выражение "+" Терм
    Выражение "-" Терм

Терм:
    Вторичное_выражение
    Терм "*" Первичное_выражение
    Терм "/" Первичное_выражение
    Терм "%" Первичное_выражение

Вторичное_выражение:
    Первичное_выражение "!"

Первичное_выражение:
    Число
    "(" Выражение ")"
    "{" Выражение "}"
    "-" Первичное_выражение
    "+" Первичное_выражение
    Переменная

Число:
    Литерал_с_плавающей_точкой

*/

#include "../std_lib_facilities.h"

const char number = '8';        // t.kind == number означает, что t - число
const char quit = 'q';          // t.kind == quit означает, что t = лексема выхода
const char print = ';';         // t.kind == print означает, что t - лексема печати
const char help = '?';
const char name = 'a';          // Лексема Имя
const char let = 'L';           // Лексема let
const char c_sin = 's';
const char c_cos = 'c';

const string prompt = "> ";     
const string result = "= ";     // Используется для указания на то,
                                // что далее следует результат
const string declkey = "let";   // Колючевое слово let

const char square_root = '@';
const char exponent = '^';
const string sqrtkey = "sqrt";
const string expkey = "pow";
const string sinkey = "sin";
const string coskey = "cos";
const string quitkey = "quit";
const string helpkey = "help";

class Token {                   // класс Лексема
public:
    char kind;                  // тип лексемы
    double value;               // значение лексемы
    string name;

    Token (char k) : kind {k}, value {0} { }                // Инициализирует kind символом ch
    Token (char k, double v) : kind {k}, value {v} { }      // Инициализирует kind и value
    Token (char ch, string n) : kind {ch}, value {0}, name {n} { }     // Инициализирует kind и name
};

class Token_stream {            // класс Поток Лексем
public:
    Token get ();               // Получение лексемы (get () определена в §6.8.2)
    void putback (Token t);     // Возврат лексемы в поток
    void ignore (char c);       // Отбрасывает символы до
                                // символа 'с' включительно
private:
    bool full { false };        // Имеется ли лексема в буфере?
    Token buffer {'0'};         // Здесь хранится лексема после
                                // возврата с помощью putback ()
};

void Token_stream::ignore (char c) {
    if (full && c == buffer.kind) {
        full = false;
        return;
    }
    full = false;

    char ch = 0;
    while (cin >> ch) if (ch == c) return;
}

void Token_stream::putback (Token t) {
    // if (full) error ("putback (): буфер заполнен");
    buffer = t;                 // Копируем t в буфер
    full = true;                // Буфер заполнен
}

Token Token_stream::get () {
    if (full) {
        full = false;           // Есть готовый объект Token?
        return buffer;          // Убираем его из буфера и возвращаем
    }

    char ch; cin.get (ch);         // Заметим, что оператор >> пропускает
                                // пробельные символы

    while (isspace (ch) && ch != '\n') cin.get (ch);

    switch (ch) {
        case '\n': return Token { print };
        case print:             // Для выхода
        case quit:              // Для выхода
        case help:
        case '!': case '%':
        case '{': case '}':
        case '(': case ')': 
        case '+': case '-': 
        case '*': case '/':
        case '=': case ',':
            return Token { ch };  // Символ представляет сам себя
        case '.':
        case '0': case '1': case '2': case '3': case '4':
        case '5': case '6': case '7': case '8': case '9': {
            cin.putback (ch);   // Возвращаем цифру во входной поток
            double val;
            cin >> val;         // Считываем число с плавающей точкой
            return Token { number, val };    // '8' означает лексему "число"
        }
        default: 
            if (isalpha (ch)) {
                string s; s += ch;
                while (cin.get (ch) &&
                        (isalpha (ch) || isdigit (ch) || ch == '_')) s += ch; // Упражнение 1: ch == '_'
                cin.putback (ch);
                if (s == declkey) return Token { let };   // Ключевое слово let
                else if (s == sqrtkey) return Token { square_root };
                else if (s == expkey) return Token { exponent };
                else if (s == sinkey) return Token { c_sin };
                else if (s == coskey) return Token { c_cos };
                else if (s == quitkey) return Token { quit };
                else if (s == helpkey) return Token { help };
                else return Token {name, s};
            }
            error ("Неверная лексема");
    }
}

class Variable {
public:
    string name;
    double value;
    bool constant;
    
    Variable (string n, double v, bool c = false) : name {n}, value {v}, constant {c} { }
};

// Упражнение 4: class Symbol_table
class Symbol_table {
    vector <Variable> var_table;
    public:
        double get_value (string);
        double set_value (string, double);
        bool is_declared (string);
        double define_name (string, double, bool con = false);
};

// Возвращает значение переменной с именем 's'
double Symbol_table::get_value (string s) {
    for (const Variable& v : var_table)
        if (v.name == s) return v.value;
    error ("get: неопределенная переменная ", s);
}

// Присваивает объекту s типа Variable значение d
double Symbol_table::set_value (string s, double d) {
    for (Variable& v : var_table) {
        if (v.name == s) { 
            if (v.constant) error ("Невозможно изменить константу");
            v.value = d; return d; 
        }
    }
    error ("set: неопределенная переменная", s);
}


// Есть ли перемменная var в векторе var_table?
bool Symbol_table::is_declared (string var) {
    for (const Variable& v : var_table)
        if (v.name == var) return true;
    return false;
}


// Добавляем пару (var, val) в вектор var_table
double Symbol_table::define_name (string var, double val, bool con) {
    if (is_declared (var)) error (var, " повторное объявление");
    var_table.push_back (Variable {var, val, con});
    return val;
}

Token_stream ts;                        // Предоставляет get () и putback ()
Symbol_table st;                        // Позволяет создавать и изменить переменные
double expression ();                   // Объявление для использования
                                        // в функции primary ()

double calc_sqrt () {
    char ch;
    if (cin.get (ch) && ch != '(') error ("требуется '('");
    cin.putback (ch);
    double d = expression ();
    if (d < 0) error ("sqrt: отрцитальное значение невозможно");
    return sqrt (d);
}

double calc_pow () {
    Token t = ts.get ();
    if (t.kind != '(') error ("требуется '('");
    double base = expression ();
    t = ts.get ();
    if (t.kind != ',') error ("',' пропущен");
    int power = narrow_cast <int> (expression ());
    t = ts.get ();
    if (t.kind != ')') error("')' пропущен");
    return pow (base, power);
}

double calc_sin () {
    char ch;
    if (cin.get (ch) && ch != '(') error ("требуется '('");
    cin.putback (ch);
    double d = expression ();
    // if (d == 90 || d == 270) return 1;
    if (d == 0 || d == 180) return 0;
    return sin (d * 3.1415926535 / 180);
}

double calc_cos () {
    char ch;
    if (cin.get (ch) && ch != '(') error ("требуется '('");
    cin.putback (ch);
    double d = expression ();
    // if (d == 0 || d == 180) return 1;
    if (d == 90 || d == 270) return 0;      // return 0 instead of 8.766e-11
    return cos (d * 3.1415926535 / 180);
}

double declaration () {
    // Считаем, что мы уже встретили ключевое слово "let "
    // Обра батываем: Имя = Выражение
    // Объявление переменной с Именем с начальным значением,
    // заданным Выражением

    Token t = ts.get ();
    if (t.kind != name) error ("в объявлении ожидается имя переменной");
    string var_name=  t.name;

    Token t2 = ts.get ();
    if (t2.kind != '=') error ("пропущен символ '=' в объявлении ", var_name);

    double d = expression ();
    st.define_name (var_name, d);
    return d;
}

double statement () {
    Token t = ts.get ();
    switch (t.kind) {
        case let: return declaration ();
        default:
            ts.putback (t);
            return expression ();
    }
}
// Упражнение 2
double handle_variable (Token& t)
{
    Token t2 = ts.get ();
    if (t2.kind == '=') return st.set_value (t.name, expression ());
    else {
        ts.putback (t2);
        return st.get_value (t.name);       // missing in text!
    }
}

// Работа с числами и скобками
double primary () {
    Token t = ts.get ();
    switch (t.kind) {
        case '(': {
            double d = expression ();
            t = ts.get ();
            if (t.kind != ')') error ("требуется ')");
            return d;
        }
        case '{': {
            double d = expression ();
            t = ts.get ();
            if (t.kind != '}') error ("требуется ')");
            return d;
        }
        case number: return t.value;
        case name: return handle_variable (t);
        case '-': return - primary ();
        case '+': return primary ();
        case square_root: return calc_sqrt ();
        case exponent: return calc_pow ();
        case c_sin: return calc_sin ();
        case c_cos: return calc_cos ();
        default: error ("требуется первичное значение");
    }
}

// Работа с !
double secondary() {
    double left = primary ();
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
double term () {
    double left = secondary ();
    Token t = ts.get ();                // Получаем следующую лексему
    while (true) {
        switch (t.kind) {
            case '*':
                left *= secondary ();
                t = ts.get ();
                break;
            case '/': {
                double d = secondary ();
                if (d == 0) error ("деление на нуль");
                left /= d;
                t = ts.get ();
                break;
            }
            case '!': { // упражнение 3
                if (left < 0) error ("факториал отрицательного числа");
                if (left == 0) left = 1;
                for (int i = left - 1; i > 1; i--) left *= i;
                t = ts.get ();
                break;
            }
            case '%': {
                // double d = primary ();
                // if (d == 0) error ("%: деление на нуль");
                // left = fmod (left, d);
                int i1 = narrow_cast <int> (left);
                int i2 = narrow_cast <int> (primary ());
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
double expression () {
    double left = term ();              // Считываем и вычисляем Терм
    Token t = ts.get ();                // Получаем следующую лексему
    while (true) {
        switch (t.kind) {
            case '+':
                left += term ();        // Вычисляем Терм и суммируем
                t = ts.get ();
                break;
            case '-':
                left -= term ();        // Вычисляем Терм и вычитаем
                t = ts.get ();
                break;
            default:
                ts.putback (t);         // Возврат t в поток лексем
                return left;            // Конец: символов + и - нет;
                                        // возвращаем ответ
        }
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
        while (cin) {
            cout << prompt;
            Token t = ts.get ();
            while (t.kind == print) t = ts.get ();  // Удаление вывода
            if (t.kind == help) print_help ();
            else if (t.kind == quit) return;
            else {
                ts.putback (t);
                cout << result << statement () << '\n';
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
