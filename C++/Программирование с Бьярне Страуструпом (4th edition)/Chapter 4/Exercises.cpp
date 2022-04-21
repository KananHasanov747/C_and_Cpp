// Контрольные вопросы в конце глав
#include <iostream>
#include <vector>
#include <cmath>

// Задание №8
/*
int main () {
    int n, counter = 0;
    std::cout << "Введите общее количество риса: "; std::cin >> n;
    for (int i = 1; i < n; i *= 2) {
        std::cout << i << '\n';
        counter++;
    }
    
    std::cout << "Количество клеток занято " << counter + 1 << '\n';
}
*/

// Задание №10
/*
int main () {
    std::vector <char> temps;
    std::cout << "Выберите через пробел 10 ходов (r, s, p): ";
    for (char temp; std::cin >> temp; ) temps.push_back (temp);

    for (int i = 0; i < temps.size (); i++) {
        switch (temps [i]) {
            case 'r':
                std::cout << 'p' << ' ';
                break;
            
            case 's':
                std::cout << 'r' << ' ';
                break;

            case 'p':
                std::cout << 's' << ' ';
                break;

            default:
                std::cout << "Я не знаю что это" << '\n';
        }
    }
    std::cout << '\n';
}
*/

// Задание №11
/*
int main () {
    std::vector <int> primes;

    primes.push_back (2);

    for (int i = 3; i < 101; i++) {
        for (int j = 0; j < primes.size (); j++) {
            if (i % primes [j] == 0) break;
            if (j == primes.size () - 1 && i % primes [j] != 0) {primes.push_back (i); break;}
        }
    }

    for (int i : primes) std::cout << i << ' ';
    std::cout << '\n';
}

// 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97 101 103 107 109 113 127 131 137 139 149 151 157 163 167 173
//  + + + +  +  +  +  +  +  +  +  +  +  +  +  +  +  +  +  +  +  +  +  +  +   +   +   +   +   +   +   +   +   +   +   +   +   +   +
//  1 2 2 4  2  4  2  4  6  2  6  4  2  4  6  6  2  6  4  2  6  4  6  6  4   2   4   2   4   14  4   6   2   10  2   6   6   4   6
*/

// Задание №13
/*
int main () {
    int max = 101;
    std::vector <int> arr;
    std::vector <int> primes;


    for (int i = 2; i < max; i++) arr.push_back (0);

    for (int i = 2; i < max; i++) {
        if (arr [i - 2] == 0) {arr [i - 2] = i; primes.push_back (i);}

        for (int p : primes) if (p <= arr [i - 2] && p * i <= max) arr [p * i - 2] = p;
    }

    for (int p : primes) std::cout << p << ' ';
    std::cout << '\n';
}
*/

// Задание №18
/*
int main () {
    double a, b, c;
    std::cout << "Введите a, b, c: ";
    std::cin >> a >> b >> c;

    double D = b * b - 4 * a * c;
    if (D < 0) std::cout << "Решений нет" << '\n';
    else if (D == 0) std::cout << "x = " << -b / 2 / a << '\n';
    else std::cout << "x1 = " << (-b + sqrt (D)) / 2 / a << ", x2 = " << (-b - sqrt (D)) / 2 / a << '\n';    
}
*/