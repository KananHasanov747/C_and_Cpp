//
// Stroustrup - Programming Principles & Practice
//
// Chapter 6 - Calculator
//
// Try This #3 - Get final chapter 6 version of calculator to run
//
// ex 2 - Add the ability to use {} so that {(4+5)*6}/(3+4)}; is valid
//
// ex 3 - Add a factorial operator '!'. Make '!' bind tighter than '*' & '/'
//

/*
#include "std_lib_facilities.h"

class Token {
public:
    char kind;
    double value;

    Token(char k) : kind{k}, value{0} { }
    Token(char k, double v) : kind{k}, value{v} { }
};

class Token_stream {
public:
    Token get();                // get a Token
    void putback(Token t);      // put a token back
private:
    bool full { false };        // is there a Token in the buffer?
    Token buffer {'0'};         // here is where putback() stores a Token
};

void Token_stream::putback(Token t)
{
    buffer = t;                 // copy t to buffer
    full = true;                // buffer is now full
};

Token Token_stream::get()
    // ex 2 - added '{' & '}'
    // ex 3 - added '!'
{
    if (full) {             // do we already have a Token?
        full = false;       // remove Token from buffer
        return buffer;
    }

    char ch;
    cin >> ch;              // note that >> skips whitespace

    switch (ch) {
        case ';':           // for "print"
        case 'q':           // for "quit"
        case '(': case ')': case '{': case '}': case '!':
        case '+': case '-': case '*': case '/':
            return Token { ch };
        case '.':
        case '0': case '1': case '2': case '3': case '4':
        case '5': case '6': case '7': case '8': case '9':
            {
                cin.putback(ch);    // put digit back into input stream
                double val;
                cin >> val;
                return Token { '8', val };  // let '8' represent a number
            }
        default:
            error("Bad token");
    }
};

Token_stream ts;            // provides get() and putback()
double expression();        // forward declaration for primary to call

double primary()            // deal with numbers and parenthesis
    // ex 2 - added '{' case
{
    Token t = ts.get();
    switch (t.kind) {
        case '(':                   // handle '(' expression ')'
            {
                double d = expression();
                t = ts.get();
                if (t.kind != ')') error("')' expected");
                return d;
            }
        case '{':
            {
                double d = expression();
                t = ts.get();
                if (t.kind != '}') error("'}' expected");
                return d;
            }
        case '8':                   // we use '8' to represent a number
            return t.value;         // return the number's value
        default:
            error("primary expected");
    }
}

double secondary()          
    // ex 3 - Add a factorial operator '!'
{
    double left = primary();
    Token t = ts.get();

    while (true) {
        if (t.kind == '!') {
            if (left == 0)
                return 1;

            for (int i = left - 1; i > 0; --i)
                left *= i;

            t = ts.get();
        }
        else {
            ts.putback(t);
            return left;
        }
    }
}

double term()               // deal with * and /
{
    double left = secondary();
    Token t = ts.get();             // get next token from Token_stream

    while (true) {
        switch (t.kind) {
            case '*':
                left *= secondary();
                t = ts.get();
                break;
            case '/':
                {
                    double d = secondary();
                    if (d == 0) error("divide by zero");
                    left /= d;
                    t = ts.get();
                    break;
                }
            default:
                ts.putback(t);      // put t back into the Token_stream
                return left;
        }
    }
}

double expression()         // deal with + and -
{
    double left = term();           // read and evaluate a term
    Token t = ts.get();             // get next token from Token_stream

    while (true) {
        switch (t.kind) {
            case '+':
                left += term();     // evaluate term and add
                t = ts.get();
                break;
            case '-':
                left -= term();     // evaluate term and subtract
                t = ts.get();
                break;
            default:
                ts.putback(t);      // put t back into the token stream
                return left;
        }
    }
}

int main()
try {
    double val = 0;
    while (cin) {
        Token t = ts.get();

        if (t.kind == 'q') break;       // 'q' for "quit"
        if (t.kind == ';')              // ';' for "print now"
            cout << "= " << val << '\n';
        else
            ts.putback(t);
        val = expression();
    }
}
catch(exception& e) {
    cerr << "Exception: " << e.what() << '\n';
    return 1;
}
catch(...) {
    cerr << "Unknown exception\n";
    return 2;
}
*/


#include <std_lib_facilities.h>

class Token {
    public:
        char kind;              // тип лексемы
        double value;           // значение лексемы

    Token (char k) : kind {k}, value {0} { }                // если это не число
    Token (char k, double v) : kind {k}, value {v} { }      // если это число
};
class Token_stream {
    public:
        Token get ();           // Получение лексемы (get () определена в §6.8.2)
        void putback (Token t); // Возврат лексемы в поток
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
Token Token_stream::get () {
    if (full) {
        full = false;           // Есть готовый объект Token?
        return buffer;          // Убираем его из буфера и возвращаем
    }

    char ch; cin >> ch;         // Заметим, что оператор >> пропускает
                                // пробельные символы
    switch (ch) {
        case ';':               // Для выхода
        case '!':
        case 'q':               // Для выхода
        case '(': case ')': case '+':
        case '-': case '*': case '/':
            return Token { ch };  // Символ представляет сам себя
        case '.':
        case '0': case '1': case '2': case '3': case '4':
        case '5': case '6': case '7': case '8': case '9': {
            cin.putback (ch);   // Возвращаем цифру во входной поток
            double val;
            cin >> val;         // Считываем число с плавающей точкой
            return Token { '8', val };    // '8' означает лексему "число"
        }
        default: error ("Неверная лексема");
    }
}

Token_stream ts;                        // Предоставляет get () и putback ()
double expression ();                   // Объявление для использования
                                        // в функции primary ()

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
        case '8': return t.value;
        default: error ("требуется первичное значение");
    }
}

// Работа с * и /
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
                if (left == 0) left = 1;
                for (int i = left - 1; i > 1; i--) left *= i;
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
int main () {
    try {
        double val = 0;
        while (cin) {
            Token t = ts.get ();
            if (t.kind == 'q') break;
            if (t.kind == ';') cout << "= " << val << endl;
            else ts.putback (t);
            val = expression ();
        }
    } catch(exception& e) {
        cerr << e.what() << '\n';
        return 1;
    } catch(...) {
        cerr << "исключение\n";
        return 2;
    }
}
