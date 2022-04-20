// -*- C -*-
//===--------------------------variadic_function---------------------------===//
//
// See https://en.wikipedia.org/wiki/Variadic_function about Variadic Function
//
//===-----------------------------variadic_sum-----------------------------===//

// See https://en.wikipedia.org/wiki/Template_(C%2B%2B) about Template

#include <stdio.h>
       
int variadic_sum (const char *fmt, ...) {

}

//===-----------------------------variadic_max-----------------------------===//

int variadic_max (va_list args) {
    // (std::cout << ... << args) << std::endl;
    return 0;
    
}

//===-----------------------------variadic_min-----------------------------===//

int variadic_min () {
    return 0;
}

//===----------------------------------------------------------------------===//

int main () {
    printf ("%d", variadic_sum (1, 2, 3));
    // std::cout << variadic_max (1, 3, 2, 3, 1, 2, 3, 7, 9, 5, 3, 8, 4, 3) << std::endl;
}