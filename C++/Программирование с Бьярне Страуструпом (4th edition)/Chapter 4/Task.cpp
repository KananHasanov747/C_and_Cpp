#include <iostream>
#include <cmath>

int main () {
    double val1, val2;
    while (std::cin >> val1 >> val2) {
        if (abs (val1 - val2) < 1.0 / 100) std::cout << "Числа почти равны";
        if (val1 == val2) {std::cout << "Числа равны" << '\n'; continue;}
        
        (val1 > val2) ? std::cout << "Наименьшее значение равно: " << val2 << '\n' : std::cout << "Наименьшее значение равно: " << val1 << '\n';
        (val1 > val2) ? std::cout << "Наибольшее значение равно: " << val1 << '\n' : std::cout << "Наибольшее значение равно: " << val2 << '\n';
    }
}