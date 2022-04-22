#include <std_lib_facilities.h>

const char number = '8';        // t.kind == number означает, что t - число
const char quit = 'q';          // t.kind == quit означает, что t = лексема выхода
const char print = ';';         // t.kind == print означает, что t - лексема печати
const string prompt = "> ";     

const string result = "= ";     // Используется для указания на то,
                                // что далее следует результат


class Token {
    public:
        char kind;              // тип лексемы
        double value;           // значение лексемы
        string name;

    Token (char k) : kind {k}, value {0} { }                // Инициализирует kind символом ch
    Token (char k, double v) : kind {k}, value {v} { }      // Инициализирует kind и value
    Token (char ch, string n) : kind {ch}, name {n} { }     // Инициализирует kind и name
};

class Token_stream {
    public:
        Token get ();           // Получение лексемы (get () определена в §6.8.2)
        void putback (Token t); // Возврат лексемы в поток
        void ignore (char c);   // Отбрасывает символы до
                                // символа 'с' включительно
    private:
        bool full { false };    // Имеется ли лексема в буфере?
        Token buffer {'0'};     // Здесь хранится лексема после
                                // возврата с помощью putback ()
};

void Token_stream::putback (Token t) {
    if (full) error ("putback (): буфер заполнен");
    buffer = t;                 // Копируем t в буфер
    full = true;                // Буфер заполнен
}

const char name = 'a';          // Лексема Имя
const char let = 'L';           // Лексема let
const string declkey = "let";   // Колючевое слово let

Token Token_stream::get () {
    if (full) {
        full = false;           // Есть готовый объект Token?
        return buffer;          // Убираем его из буфера и возвращаем
    }

    char ch; cin >> ch;         // Заметим, что оператор >> пропускает
                                // пробельные символы
    switch (ch) {
        case print:             // Для выхода
        case quit:              // Для выхода
        case '!': case '%':
        case '(': case ')': case '+':
        case '-': case '*': case '/':
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
                        (isalpha (ch) || isdigit (ch))) s += ch;
                cin.putback (ch);
                if (s == declkey) return Token (let);   // Ключевое слово let
                return Token {name, s};
            }
            error ("Неверная лексема");
    }
}

void Token_stream::ignore (char c) {
    if (full && c == buffer.kind) {
        full = false;
        return;
    }
    full = false;

    char ch = 0;
    while (cin >> ch) if (ch == c) return;
}

class Variable {
    public:
        string name;
        double value;
};

vector <Variable> var_table;

// Возвращает значение переменной с именем 's'
double get_value (string s) {
    for (const Variable& v : var_table)
        if (v.name == s) return v.value;
    error ("get: неопределенная переменная ", s);
}

// Присваивает объекту s типа Variable значение d
void set_value (string s, double d) {
    for (Variable& v : var_table) {
        if (v.name == s) { v.value = d; return; }
    }
    error ("set: неопределенная переменная", s);
}


// Есть ли перемменная var в векторе var_table?
bool is_declared (string var) {
    for (const Variable& v : var_table)
        if (v.name == var) return true;
    return false;
}


// Добавляем пару (var, val) в вектор var_table
double define_name (string var, double val) {
    if (is_declared (var)) error (var, " повторное объявление");
    var_table.push_back (Variable (var, val));
}

Token_stream ts;                        // Предоставляет get () и putback ()
double expression ();                   // Объявление для использования
                                        // в функции primary ()

double declaration () {
    Token t = ts.get ();
    if (t.kind != name) error ("в объявлении ожидается имя переменной");
    string var_name=  t.name;

    Token t2 = ts.get ();
    if (t2.kind != '=') error ("пропущен символ '=' в объявлении ", var_name);

    double d = expression ();
    define_name (var_name, d);
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
        case number: return t.value;
        case '-': return - primary ();
        case '+': return primary ();
        default: error ("требуется первичное значение");
    }
}

// Работа с *, /, ! и с %
double term () {
    double left = primary ();
    Token t = ts.get ();                // Получаем следующую лексему
    while (true) {
        switch (t.kind) {
            case '*':
                left *= primary ();
                t = ts.get ();
                break;
            case '/': {
                double d = primary ();
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
                if (i2 == 0) error ("%: делетние на нуль");
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

void calculate () {
    try {
        while (cin) {
            cout << prompt;
            Token t = ts.get ();
            while (t.kind == print) t = ts.get ();  // Удаление вывода
            if (t.kind == quit) return;
            ts.putback (t);
            cout << result << expression () << '\n';
        }
    } catch (exception& e) {
        cerr << e.what () << '\n';
        clean_up_mess ();
    }
}


int main () {
    try {
        // Предопределенные имена
        define_name ("pi", 3.1415926535);
        define_name ("e", 2.7182818284);

        calculate ();

        keep_window_open ();    // Удерживает консольное окно открытыым
        return 0;
    } catch (exception& e) {
        cerr << e.what () << '\n';
        keep_window_open ("~~");
        return 1;
    } catch (...) {
        cerr << "исключение \n";
        keep_window_open ("~~");
        return 2;
    }
}
