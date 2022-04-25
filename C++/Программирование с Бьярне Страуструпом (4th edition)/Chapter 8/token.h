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

    Token (char k) : kind {k}, value {0} { }                // Инициализирует kind символом k
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