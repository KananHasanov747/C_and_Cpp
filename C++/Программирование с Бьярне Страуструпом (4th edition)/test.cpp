#include <std_lib_facilities.h>

/*
int main () {
    vector <string> words;
    for (string temp; cin >> temp; ) words.push_back (temp);

    cout << "Количсетво слов: " << words.size () << '\n';

    sort (words.begin (), words.end ());
    for (int i = 0; i < words.size (); ++i)
        if (i == 0 || words [i - 1] != words [i]) cout << words [i] << '\n';
}
*/

/*
int main () {
    try {
        vector <int> v;
        for (int x; cin >> x;) v.push_back (x);
        for (int i = 0; i < v.size (); ++i) cout << "v [" << i << "] = " << v [i] << '\n';
    } catch (out_of_range) {
        cerr << "Ошибка диапазона!\n";
        return 1;
    } catch (...) {
        cerr << "Исключение: что-то пошло не так\n";
        return 2;
    }
}
*/

/*
double some_func () {
    double d = 0; cin >> d;
    if (!cin) error ("Не могу считать число double"
                     " в 'some_func ()' ");
    return 1;
}

int main () {
    some_func ();
}
*/

// 5.6.4
/*
int main () {
    int x1 = narrow_cast <int> (2.9);
    int x2 = narrow_cast <int> (2.0);
    char c1 = narrow_cast <char> (1066);
    char c2 = narrow_cast <char> (85);
}
*/

// 5.7
/*
int main () {
    
    // vector <double> temps;

    // for (double temp; cin >> temp; ) temps.push_back (temp);

    // double sum       = 0;
    // double high_temp = 0;
    // double low_temp  = 0;

    // for (double x : temps) {
    //     if (x > high_temp) high_temp = x;
    //     else if (x < low_temp) low_temp = x;
    //     sum += x;
    // }

    // cout << "Максимальная температура: "
    //      << high_temp << '\n';
    // cout << "Минимальная температура: "
    //      << low_temp << '\n';
    // cout << "Средняя температура: "
    //      << sum / temps.size () << '\n';
    

    vector <double> temps;

    double sum       = 0; // ˚F
    double high_temp = -132.16; // ˚F
    double low_temp  = 134.06; // ˚F

    int no_of_temps  = 0;

    for (double temp; cin >> temp; ) ++no_of_temps;

    for (double x : temps) {
       sum += x;
       if (x > high_temp) high_temp = x;
       else if (x < low_temp) low_temp = x;
    }

    cout << "Максимальная температура: "
         << high_temp << '\n';
    cout << "Минимальная температура: "
         << low_temp << '\n';
    cout << "Средняя температура: "
         << sum / no_of_temps << '\n';
}
*/


int my_complicated_function (int a, int b, int c) {
    if (!(0 < a && a < b && b < c)) error ("Неверные аргументы функции mcf");
    return 0;
}

/*

one-dim-arr as:

1) one-dim-arr: int* arr = new int [X]
arr [i] = arr [i]

standard form:
int* arr = new int [X];

---------------------------------------------------------------------------------------------------------------------------------------

2) two-dim-arr: int* arr = new int [X * Y]
arr [i][j] = arr [i * Y + j]

standard form:

int** arr = new int* [X];
for (int i = 0; i < X; i++) arr [i] = new int [Y];

---------------------------------------------------------------------------------------------------------------------------------------

3) three-dim-arr: int* arr = new int [X * Y * Z]
arr [i][j][k] = arr [i * Y * Z + j * Z + k]

standard form:

int*** arr = new int** [X];
for (int i = 0; i < X; i++) arr [i] = new int* [Y];
for (int i = 0; i < X; i++) for (int j = 0; j < Y; j++) arr [i][j] = new int [Z];

---------------------------------------------------------------------------------------------------------------------------------------

4) multidimensional-arr: int* arr = new int [L1 * L2 * ... * Ln]
arr [i1][i2]...[in] = arr [i1 * L2 * L3 * ... * Ln + i2 * L3 * L4 * ... * Ln + i3 * L4 * L5 * ... * Ln + ... + i(n-2) * L(n-1) * Ln + i(n-1) * Ln + in]
*/

/*

arr:        0,0 0,1 0,2 | 0,3 0,4 0,5 | 0,6 0,7 0,8
            1,0 1,1 1,2 | 1,3 1,4 1,5 | 1,6 1,7 1,8
            2,0 2,1 2,2 | 2,3 2,4 2,5 | 2,6 2,7 2,8
            ------------|-------------|------------
            3,0 3,1 3,2 | 3,3 3,4 3,5 | 3,6 3,7 3,8
            4,0 4,1 4,2 | 4,3 4,4 4,5 | 4,6 4,7 4,8
            5,0 5,1 5,2 | 5,3 5,4 5,5 | 5,6 5,7 5,8
            ------------|-------------|------------
            6,0 6,1 6,2 | 6,3 6,4 6,5 | 6,6 6,7 6,8
            7,0 7,1 7,2 | 7,3 7,4 7,5 | 7,6 7,7 7,8
            8,0 8,1 8,2 | 8,3 8,4 8,5 | 8,6 8,7 8,8

square_arr: 0,0 0,1 0,2 1,0 1,1 1,2 2,0 2,1 2,2
            0,3 0,4 0,5 1,3 1,4 1,5 2,3 2,4 2,5
            0,6 0,7 0,8 1,6 1,7 1,8 2,6 2,7 2,8
            3,0 3,1 3,2 4,0 4,1 4,2 5,0 5,1 5,2
            3,3 3,4 3,5 4,3 4,4 4,5 5,3 5,4 5,5
            3,6 3,7 3,8 4,6 4,7 4,8 5,6 5,7 5,8
            6,0 6,1 6,2 7,0 7,1 7,2 8,0 8,1 8,2
            6,3 6,4 6,5 7,3 7,4 7,5 8,3 8,4 8,5
            6,6 6,7 6,8 7,6 7,7 7,8 8,6 8,7 8,8

arr [i][j] = square_arr []

2 + 

i,j       3 * i + j + 

0,0 = 0   3 * 0 + 0 = 0 + 0 * 2 * 3
0,1 = 1   3 * 0 + 1 = 1
0,2 = 2   3 * 0 + 2 = 2
1,0 = 3   3 * 1 + 0 = 3
1,1 = 4   3 * 1 + 1 = 4
1,2 = 5   3 * 1 + 2 = 5
2,0 = 6   3 * 2 + 0 = 6
2,1 = 7   3 * 2 + 1 = 7
2,2 = 8   3 * 2 + 2 = 8 + 0 * 2 * 3

0,3 = 9   3 * 0 + 3 = 3 + 1 * 2 * 3
0,4 = 10  3 * 0 + 4 = 4 
0,5 = 11  3 * 0 + 5 = 5 
1,3 = 12  3 * 1 + 3 = 6 
1,4 = 13  3 * 1 + 4 = 7 
1,5 = 14  3 * 1 + 5 = 8 
2,3 = 15  3 * 2 + 3 = 9 
2,4 = 16  3 * 2 + 4 = 10 
2,5 = 17  3 * 2 + 5 = 11 + 1 * 2 * 3


0,6 = 18  3 * 0 + 6 = 6 + 2 * 2 * 3
0,7 = 19  3 * 0 + 7 = 7
0,8 = 20  3 * 0 + 8 = 8
1,6 = 21  3 * 1 + 6 = 9
1,7 = 22  3 * 1 + 7 = 10
1,8 = 23  3 * 1 + 8 = 11
2,6 = 24  3 * 2 + 6 = 12
2,7 = 25  3 * 2 + 7 = 13
2,8 = 26  3 * 2 + 8 = 14 + 2 * 2 * 3 

3,0 = 27  3 * 3 + 0 = 9 + 3 * 2 * 3
3,1 = 28  3 * 3 + 1 = 10
3,2 = 29  3 * 3 + 2 = 11
4,0 = 30  3 * 4 + 0 = 12
4,1 = 31  3 * 4 + 1 = 13
4,2 = 32  3 * 4 + 2 = 14
5,0 = 33  3 * 5 + 0 = 15
5,1 = 34  3 * 5 + 1 = 16
5,2 = 35  3 * 5 + 2 = 17 + 3 * 2 * 3

0,0 0,1 0,2 1,0 1,1 1,2 2,0 2,1 2,2 0,3 0,4 0,5 1,3 1,4 1,5 2,3 2,4 2,5 0,6 0,7 0,8 1,6 1,7 1,8 2,6 2,7 2,8 3,0 3,1 3,2 4,0 4,1 4,2 5,0 5,1 5,2 3,3 3,4 3,5 4,3 4,4 4,5 5,3 5,4 5,5 3,6 3,7 3,8 4,6 4,7 4,8 5,6 5,7 5,8 6,0 6,1 6,2 7,0 7,1 7,2 8,0 8,1 8,2 6,3 6,4 6,5 7,3 7,4 7,5 8,3 8,4 8,5 6,6 6,7 6,8 7,6 7,7 7,8 8,6 8,7 8,8

*/

// https://www.linkedin.com/pulse/fast-inverse-square-root-still-armin-kassemi-langroodi
/*
#include <immintrin.h>

float SSE_InvSqrt(float number) {
    __m128 _srcReisger = _mm_set1_ps (number);
    __m128 _dstRegister = _mm_rsqrt_ps (_srcReisger);
    float array [4]; // 128-bit xmm register (4x32-bit float)
    _mm_storeu_ps (array, _dstRegister);
    return array [0]; // The result at all the elements are the same
}
*/

/*
// #define needs to create a macro
#define PI 3.14165269                               // PI number
#define getrandom(min, max) \
    (rand () % (int)((max + 1) - min) + min)

#define SUCCEEDED(hr) ((HRESULT)(hr) >= 0)
inline bool succeeded(int hr) { return hr >= 0; } // the similar with SUCCEEDED

int main () {
    // int X, Y, Z, K; X = Y = Z = K = 2;
    // int* arr = new int [X * Y * Z];

    // for (int i1 = 0; i1 < X; i1++)
    //     for (int i2 = 0; i2 < Y; i2++)
    //         for (int i3 = 0; i3 < Z; i3++)
    //             for (int i4 = 0; i4 < K && cout << "Enter value arr [" << i1 << ", " << i2 << ", " << i3 << ", " << i4 << "]: " && cin >> arr [i1 * Y * Z * K + i2 * Z * K + i3 * K + i4]; i4++);

    // cout << Q_rsqrt (12) << endl;
    // cout << SSE_InvSqrt (12) << endl;
    // cout << __cplusplus << endl;
    cout << PI * 2 << endl;
}
*/

class Example {
    public:
        ~Example () {cout << "Destructor!" << endl;}
};

int main () {
    Example * t = new Example;
    delete t; // print "Destructor!"
}