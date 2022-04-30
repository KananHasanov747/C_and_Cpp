#include "../std_lib_facilities.h"

// Задание №3
/*
void to_lower (char* s) {
    constexpr int A    = 65;
    constexpr int Z    = 90;
    constexpr int diff = 32;

    for (int i = 0; s [i]; i++) {
        int code = int (s [i]);
        if (A <= code && code <= Z) s [i] += diff;
    }
}

int main () {
    char C[] = "Hello, World!";
    to_lower (C);
    cout << C << endl;
}
*/


// Задание №4
// Напишите функцию, копирующую C-строку в 
// выделенную в динамической памяти строку.
/*
char* strdup (const char* s) {
    int n = 0; while (s [n]) ++n;
    char* c = new char [n + 1];
    for (int i = 0; s [i]; i++) c [i] = s [i];
}

int main () {
    char C[] = "Hello, World!";
    char* dyn_C = strdup (C);
    for (int i = 0; dyn_C [i]; i++) cout << dyn_C [i];
    cout << endl;
    delete[] dyn_C;
}
*/
// Задание №5
// Напишите функцию, находящую первое вхождение
// C-строки x в строку s
char* findx (const char* s, const char* x) {

}

// Задание №6
/*
unsigned long long int n = 0;

int main()
try {
    while(true) {
        double* p = new double[100000];
        n += 1;
        std::cout << n << '\n';
    }
}
catch(std::exception& e) {
    std::cerr << "Error: " << e.what() << n << '\n';
    return 1;
}
catch(...) {
    std::cerr << "Unkown Error: " << n << '\n';
}
*/

// Задание №7
/*
char* add_char (char* s) {
    char tmp;
    for (int i = 0; cin >> tmp; i++) { 
        if (tmp == '!') break;
        s [i] = tmp;
    }
    return s;
}

int main () {
    char* C = new char;
    C = add_char (C);
    for (int i = 0; C [i]; i++) cout << C [i];
    cout << endl;
}
*/

// Задание №8
/*
int main () {
    string C = ""; char ch;
    while (cin.get (ch) && ch != '!') C += ch;
    cout << C << endl;
}
*/

// Задание №9
/*
void stack_check (){
    int x = 7;
    cout << "Stack: " << &x << '\n';
}

void double_stack (){
    int y = 10;
    cout << "Stack: " << &y << '\n';
    stack_check();

    int z = 37;
    cout << "Stack: " << &z << '\n';
}

void free_check (){
    int* arr = new int [5];

    for (int i = 0; i < 5; ++i)
        cout << "Free: " << &arr [i] << '\n';

    delete[] arr;
}

int main () {
    stack_check ();
    cout << endl;
    double_stack ();
    cout << endl;
    free_check ();
}
*/