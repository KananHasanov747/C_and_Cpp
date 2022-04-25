#include "token.h"

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
    if (full) error ("putback (): буфер заполнен");
    buffer = t;                 // Копируем t в буфер
    full = true;                // Буфер заполнен
}

Token Token_stream::get () {
    if (full) {
        full = false;           // Есть готовый объект Token?
        return buffer;          // Убираем его из буфера и возвращаем
    }

    char ch; cin.get (ch);      // Заметим, что оператор >> пропускает
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