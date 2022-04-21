#include <std_lib_facilities.h>


/*
int main () {
    cout << "Введите выражение (разрешены + и -): ";
    int lval = 0;
    int rval;
    char op;
    int res;
    cin >> lval >> op >> rval; // Чтение чего-то наподобие 1 + 3
    if (op == '+') res = lval + rval; // Сложеине
    else if (op == '-') res = lval - rval; // Вычитание

    cout << "Результат: " << res << '\n';
    keep_window_open ();
    return 0;
}
*/

/*
int main () {
    cout << "Введите выражение (разрешены +, -, * и /)\n";
    cout << "Добавьте x к концу выражения (1+2*3x): ";
    int lval = 0, rval;
    cin >> lval; // Чтение крайнего слева операнда

    if (!cin) error ("нет первого операнда");
    for (char op; cin >> op; ) {// Чтение оператора и правого операнда
        if (op != 'x') cin >> rval;
        if (!cin) error ("нет второго операнда");
        switch (op) {
            case '+':
                lval += rval; break; // Сложение: lval = lval + rval
            case '-':
                lval -= rval; break; // Вычитание: lval = lval - rval
            case '*':
                lval *= rval; break; // Умножение: lval = lval * rval
            case '/':
                lval /= rval; break; // Деление: lval = lval / rval
            default: // Операторов больше нет; вывод результата
                cout << "Результат: " << lval << '\n';
                keep_window_open ();
                return 0;
        }
    }
    error ("неверное выражение");
}
*/

// Лексемы
/*
class Token { // Очень простой пользовательский тип
    public:
        char kind;      // Разновидность лексемы
        double value;   // Для чисел: значение
};

int main () {
    // Token t;            // t - объект класса Token
    // t.kind = '+';       // t представляет операцию +
    // Token t2;
    // t2.kind = '8';      // Цифра 8 использована для обозначения лексем-чисел
    // t2.value = 3.14;

    // Token tt = t;       // Инициализация копированием
    // if (tt.kind != t.kind) error ("невозможно!");
    // t = t2;
    // cout << t.value;    // Вывод числа 3.14

    Token t1 {'+'};         // Инициализируем t1 (t1.kind = '+')
    Token t2 {'8', 11.5};   // Инициализируем t2 (t2.kind = '8' и t2.value = 11.5)
}
*/

// Класс Token
class Token {
    public:
        char kind;
        double value;
};

Token get_token ();         // Функция чтения лексемы из потока cin

/*

vector <Token> tok;         // Сюда помещаем лексемы

int main () {
    while (cin) {
        Token t = get_token ();
        tok.push_back (t);
    }

    for (int i = 0; i < tok.size (); ++i) {
        if (tok [i].kind == '*') {  // Найдено умножение!
            double d = tok [i - 1].value * tok [i + 1].value;
        }
    }
}
*/

/*
  // 6.5.4

// expression

double primary () {
    Token t = get_token ();
    switch (t.kind) {
        case '(': {
            double d = expression ();
            t = get_token ();
            if (t.kind != ')') error ("требуется ')'");
            return d;
        }
        case '8': return t.value;
    }
}

  // 6.5.3

// double primary ();

double term () {
    double left = primary ();
    Token t = get_token ();
    while (true) {
        switch (t.kind) {
            case '*':
                left *= primary ();
                t = get_token ();
                break;
            case '/':{
                double d = primary ();
                if (d == 0) error ("деление на нуль");
                left /= d;
                t = get_token ();
                break;
            }
            default: return left;
        }
    }
}

double expression () {
    double left = term ();              // Считываем и вычисляем Терм
    Token t = get_token ();             // Получаем следующую лексему
    while (true) {
        switch (t.kind) {
            case '+':
                left += term ();        // Вычисляем Терм и суммируем
                t = get_token ();
                break;
            case '-':
                left -= term ();        // Вычисляем Терм и вычитаем
                t = get_token ();
                break;
            default: return left;       // Конец: символов + и - нет;
                                        // возвращаем ответ
        }
    }
}
*/