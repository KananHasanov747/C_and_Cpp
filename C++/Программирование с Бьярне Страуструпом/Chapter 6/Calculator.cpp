#include <std_lib_facilities.h>

class Token {
    public:
        char kind;
        double value;
};

class Token_stream {

};

void Token_stream::putback (Token t) {

}

Token Token_stream::get () {

}

Token_stream ts;        // Предоставляет get () и putback ()
double expression ();   // Объявление для использованя в функции primary ()