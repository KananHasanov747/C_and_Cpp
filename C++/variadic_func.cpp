// -*- C++ -*-
//===--------------------------variadic_function---------------------------===//
//
// See https://en.wikipedia.org/wiki/Variadic_function about Variadic Function
//
//===-----------------------------variadic_sum-----------------------------===//

// See https://en.wikipedia.org/wiki/Template_(C%2B%2B) about Template

#include <iostream>
#include <string>

template <typename... Args>          
int variadic_sum (Args... args) {
    return (args + ...);
}

//===-----------------------------variadic_max-----------------------------===//

template <typename... Args>
int variadic_max (Args... args) {
    // (std::cout << ... << args) << std::endl;
    return 0;
    
}

//===-----------------------------variadic_min-----------------------------===//

int variadic_min () {
    return 0;
}

//===----------------------------------------------------------------------===//

int main () {
    // i << j ---> i * 2^j
    // i >> j ---> i / 2^j
    int i = -4;
    // byte j = 4;
    // int a = (int) j;
    // byte b = (byte) i;
    unsigned n = 5;
    // int arr [5]; // ---> static array
    // int *arr = new int [n]; // ---> dynamic array
    std::cout << n / 3 << std::endl;
    std::cout << variadic_sum (1, 3, 2, 3, 1, 2, 3, 7, 9, 5, 3, 8, 4, 3) << std::endl;
    // std::cout << variadic_max (1, 3, 2, 3, 1, 2, 3, 7, 9, 5, 3, 8, 4, 3) << std::endl;

    /*

    if (...) 1
    else if (...) 2
    else if (...) 3
    ...
    else if (...) (n - 1)
    else n

    (...) ? 1 : ((...) ? 2 : ((...) ? 3 : (... ? (n - 1): n)))

    */
}