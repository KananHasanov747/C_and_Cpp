#include "../std_lib_facilities.h"

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

// Факториал "!"
double secondary () {
    double left = primary ();
    Token t = ts.get ();

    while (true) {
        if (t.kind == '!') {
            if (left == 0)
                return 1;

            for (int i = left - 1; i > 0; --i)
                left *= i;

            t = ts.get ();
        }
        else {
            ts.putback (t);
            return left;
        }
    }
}

// Работа с * и /
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
