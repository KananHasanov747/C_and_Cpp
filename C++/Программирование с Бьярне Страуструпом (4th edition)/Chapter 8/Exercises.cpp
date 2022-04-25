#include "../std_lib_facilities.h"

// Задание №2
void print (const vector <int>& x) {
    for (int i : x) cout << i << endl;
}

// Задание №3
void fibonacci (int& x, int& y, vector <int>& v, int& n) {
    v [0] = x; v [1] = y;
    for (int i = 2; i < n; ++i) v [i] = v [i - 1] + v [i - 2]; 
    print (v);
}

//Задание №5
void func1 (vector <int> v) {
    for (int i = 0; i < v.size (); ++i) swap (v [i], v [v.size () - i - 1]);
}

void func2 (vector <int>& v) {
    for (int i = 0; i < v.size (); ++i) swap (v [i], v [v.size () - i - 1]);
}