#include "../std_lib_facilities.h"

void print (const vector <int>& x) {
    for (int i : x) cout << i << endl;
}

int main () {
    vector <int> a {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    print (a);
}