#include <std_lib_facilities.h>

// Задание №3 в Calculator.cpp (Ln 285, Col 13)

// Задание №4

// Задание №10
/*
double factorial (int a) {
    if (a < 0) error ("factorial of negative number")
    if (a == 0) return 1; double res = 1;
    for (; a > 1; a--) res *= a;
    return res;
}

double permutation (double a, double b) {
    return factorial (a) / factorial (a - b);
}

double combination (double a, double b) {
    return (b < a / 2) ? permutation (a, b) / factorial (b) : permutation (a, a - b) / factorial (a - b);
}

int main () {
    cout << combination (60, 3) << endl;
}
*/