#include "../std_lib_facilities.h"

// Задание №7
/*
void square_equation (double a, double b, double c) {
    double D = b * b - 4 * a * c;
    if (D < 0) error ("D < 0");
    else if (D > 0) cout << (-b + sqrt (D)) / 2 / a << " " << (-b - sqrt (D)) / 2 / a << endl;
    else cout << -b / 2 / a << endl;
    return;
}

int main () {
    square_equation (2, 15, 3);
}
*/

// Задание №8
/*
int main () {
    int N; cout << "Введите количество суммируемых значений: "; cin >> N;
    vector <int> tmps;
    cout << "Введите несколько целых чисел (| для окончания ввода): ";
    for (int tmp; cin >> tmp; ) tmps.push_back (tmp);

    int sum = 0;
    for (int i = 0; i < N; i++) sum += tmps [i];

    cout << "Сумма первых " << N << " чисел равна " << sum << endl;
}
*/

// Задание №11
/*
int main () {
    int prev = 1, next = 1, tmp, N = 34;
    vector <int> fibonacci; fibonacci.push_back (prev); fibonacci.push_back (next);
    while (next < N) {
        tmp = next; next += prev; prev = tmp;
        fibonacci.push_back (next);
    }

    for (int i : fibonacci) cout << i << ' ';
    cout << endl;
}
*/

// Задание №12
/*
int main () {
    vector <int> digits (4);

    // frist method
    // random_device rd; mt19937 gen (rd ());
    // uniform_int_distribution <> dist (0, 9);
    // digit = dist (gen);
    
    srand (time (NULL));

    string N;
    while (cout << "Введите четырехзначное число из различных чисел (для остановки введите '|'): " && cin >> N && N != "|") {
        int digit = 0;
        for (int i = 0; i < 4; i++) {
            while (count (digits.begin (), digits.end (), digit) != 0) digit = rand () % 10;
            digits [i] = digit;
        }

        int bull = 0, cow = 0;
        for (int i = 0; i < 4; i++) if (N [i] - '0' == digits [i]) bull++;
        
        for (int i : N) {
            int tmp = i - '0';
            vector <int> :: iterator digitsitr = find (digits.begin (), digits.end (), tmp); // trying to find index of i in vector 'sdigits'

            if (count (digits.begin (), digits.end (), tmp) && distance (digits.begin (), digitsitr) != N.find (tmp)) cow++;
        }

        cout << "У вас " << bull << " бык(ов) и " << cow << " коров(а)" << endl;
        for (int i : digits) cout << i; cout << endl;
    }
}
*/