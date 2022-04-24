#include <iostream>
//#include "./variadic_func.cpp"

using namespace std;

// All about pointers get in this video: https://www.youtube.com/watch?v=kiUGf_Z08RQ&ab_channel=CodeBeauty

// pointers
/*
int main () {
    int m = 2;
    cout << "(m = 2) -> &m = " << &m << endl; // & is mean that you get the address in memory of variable "m"

    int n = m; // create a new object with name "n" that have the same value as "m"
    cout << "(n = m) -> &n = " << &n << endl; // the address of "n" is not the same as address of "m"

    int* ptr = &m; // pointers of m
    cout << "(*ptr = &m) -> ptr = " << ptr << endl;
    cout << "*ptr = " << *ptr << endl; // *ptr = 2

    *ptr = 10; // change the value in memory addressed by ptr
    cout << "(*ptr = 10) -> *ptr = " << *ptr << endl; // the new value
    cout << "m = " << m << endl; // and we also change the value of "m", because its also addressed on this memory as ptr

    // the pointer should have the same type as a pointing variable. For example, "double* wrongptr = &m" is wrong.

    int v;
    int* ptr2 = &v;
    *ptr2 = 7;
    cout << "v = " << v << endl;
}
*/

// void pointers
/*
void printNumber (int* numberPtr) {
    cout << *numberPtr << endl;
}

void printLetter (char* charPtr) {
    cout << *charPtr << endl;
}

void print (void* ptr, char type) {
    switch (type) {
        case 'i': cout << *((int*) ptr) << endl; break; // handle int*
        case 'c': cout << *((char*) ptr) << endl; break; // handle char*
    }
}

int main () {
    int number = 5;
    char letter = 'a';
    // printNumber (&number); // 5
    // printLetter (&letter); // a

    print (&number, 'i'); // 5
    print (&letter, 'c'); // a

}
*/

// using pointers and arrays
/*
int main () {
    int luckynumbers [5];
    // cout << "luckynumbers = " << luckynumbers << endl;
    // cout << "&luckynumbers [0] = "<< &luckynumbers [0] << endl;
    // cout << "luckynumbers [2] = "<< luckynumbers [2] << endl;
    // cout << "*(luckynumbers + 2) = "<< *(luckynumbers + 2) << endl;
    // cout << "&luckynumbers [1] = "<< &luckynumbers [1] << endl;
    // cout << "&luckynumbers [2] = "<< &luckynumbers [2] << endl;
    // cout << "&luckynumbers [3] = "<< &luckynumbers [3] << endl;
    // cout << "&luckynumbers [4] = "<< &luckynumbers [4] << endl;

    for (int i, c = 0; c < 5 && cout << "Enter number: " && cin >> i; c++) luckynumbers [c] = i;
    for (int i : luckynumbers) cout << i << " ";
    cout << endl;
    for (int i = 0; i < 6; i++) cout << *(luckynumbers + i) << " ";
    cout << endl;
}
*/

// Return multiple values from a function using pointers
/*
int getMin (int numbers [], int size) {
    int min = numbers [0];
    for (int i = 1; i < size; i++) if (min > numbers [i]) min = numbers [i];
    return min;
}

int getMax (int numbers [], int size) {
    int max = numbers [0];
    for (int i = 1; i < size; i++) if (max < numbers [i]) max = numbers [i];
    return max;
}

void getMinAndMax (int numbers [], int size, int* min, int* max) {
    for (int i = 1; i < size; i++) {
        if (*max < numbers [i]) *max = numbers [i];
        if (*min > numbers [i]) *min = numbers [i];
    }
}

int main () {
    int numbers [5] = {5, 4, -2, 29, 8};
    // cout << "Min is " << getMin (numbers, 5) << endl;
    // cout << "Max is " << getMax (numbers, 5) << endl;
    
    int min = numbers [0];
    int max = numbers [0];

    getMinAndMax (numbers, 5, &min, &max);

    cout << "Min is " << min << endl;
    cout << "Max is " << max << endl;
}
*/

// Dynamic arrays - How to create/change arrays at runtime?
/*
int main () {
    int size;
    cout << "Size: "; cin >> size;
    // int myArray [size]; // in video it consider as mistake, but for me (C++20) it doesn't
    int* myArray = new int [size];
    for (int i = 0; i < size && cout << "myArray [" << i << "] = " && cin >> myArray [i]; i++);
    for (int i = 0; i < size; i++) {
        // cout << myArray [i] << ' ';
        cout << *(myArray + i) << ' ';
    }
    cout << endl;

    delete[] myArray;
    myArray = NULL;
}
*/

// Multidimensional dynamic arrays (two-dimensional dynamic array)
/*
int main () {
    int rows, cols;
    cout << "rows, cols: "; cin >> rows >> cols;

    int** table = new int* [rows];
    for (int i = 0; i < rows; i++) table [i] = new int [cols];

    table [1][2] = 88;

    for (int i = 0; i < rows; i++) delete[] table [i];

    delete[] table;

    table = NULL;
}
*/

// Explaining Memory Leaks in C
/*
void myFunction () {
    int* ptr = new int [50000];
    ptr [2] = 10;
    cout << "Hi, I am = " << ptr [2] << endl;
    delete[] ptr;
}

int main () {
    myFunction ();
}
*/


// Function pointers
/*
#include <vector>

int getNumber () {
    return 5;
}

int add (int a, int b) {
    return a + b;
}

bool ascendingCompare (int a, int b) {
    return a < b;
}

bool descendingCompare (int a, int b) {
    return a > b;
}

void sortAscending (vector <int>& numbersVector) {
    for (int startIndex = 0; startIndex < numbersVector.size (); startIndex++) {
        int bestIndex = startIndex;

        for (int currentIndex = startIndex + 1; currentIndex < numbersVector.size (); currentIndex++) {
            // We are doing comparison here
            if (ascendingCompare (numbersVector [currentIndex], numbersVector [bestIndex])) bestIndex = currentIndex;
        }
        swap (numbersVector [startIndex], numbersVector [bestIndex]);
    }
}

void sortDescending (vector <int>& numbersVector) {
    for (int startIndex = 0; startIndex < numbersVector.size (); startIndex++) {
        int bestIndex = startIndex;

        for (int currentIndex = startIndex + 1; currentIndex < numbersVector.size (); currentIndex++) {
            // We are doing comparison here
            if (descendingCompare (numbersVector [currentIndex], numbersVector [bestIndex])) bestIndex = currentIndex;
        }
        swap (numbersVector [startIndex], numbersVector [bestIndex]);
    }
}

void customSort (vector <int>& numbersVector, bool (*compareFuncPtr)(int, int)) {
    for (int startIndex = 0; startIndex < numbersVector.size (); startIndex++) {
        int bestIndex = startIndex;

        for (int currentIndex = startIndex + 1; currentIndex < numbersVector.size (); currentIndex++) {
            // We are doing comparison here
            if (compareFuncPtr (numbersVector [currentIndex], numbersVector [bestIndex])) bestIndex = currentIndex;
        }
        swap (numbersVector [startIndex], numbersVector [bestIndex]);
    }
}

void printNumbers (vector <int>& numbersVector) {
    for (int i : numbersVector) cout << i << ' ';
    cout << endl;
}

int main () {
    // int (*funcPtr)() = getNumber; // Function pointer
    // cout << funcPtr () << endl;

    // int (*funcPtr)(int, int) = add; // Function pointer that get two 'int' parameters
    // cout << add (2, 3) << endl;
    // cout << funcPtr (2, 3) << endl;

    vector <int> myNumbers = {2, 5, 1, 3, 6, 4};
    // sortAscending (myNumbers);
    // printNumbers (myNumbers); // 1 2 3 4 5 6
    // sortDescending (myNumbers);
    // printNumbers (myNumbers); // 6 5 4 3 2 1

    bool (*funcPtr)(int, int);
    funcPtr = ascendingCompare;
    customSort (myNumbers, funcPtr);
    printNumbers (myNumbers);

    funcPtr = descendingCompare;
    customSort (myNumbers, funcPtr);
    printNumbers (myNumbers);
}
*/

// Smart pointers (unique, shared, weak)
/*
#include <memory>

class MyClass {
    public:
        MyClass () { // constructor
            cout << "Constructor invoked" << endl;
        }

        ~MyClass () { // Destructor
            cout << "Destructor invoked" << endl;
        }
};

int main () {
    // unique_ptr <int> unPtr1 = make_unique <int> (25);
    // unique_ptr <int> unPtr2 = move (unPtr1);
    
    // cout << "unPtr1 = " << unPtr1 << endl;
    // cout << "*unPtr1 = " << *unPtr1 << endl;

    // cout << endl;

    // cout << "unPtr2 = " << unPtr2 << endl;
    // cout << "*unPtr2 = " << *unPtr2 << endl; // we can't out it before *unPtr1 because our unPtr1 is empty
    
    // {
    // unique_ptr <MyClass> unPtr3 = make_unique <MyClass> ();
    // } // if we have an end of the scope the unPtr3 print destuctor method

    // shared_ptr <MyClass> shPtr1 = make_shared <MyClass> ();
    // cout << "Shared count: " << shPtr1.use_count () << endl;
    // {
    //     shared_ptr <MyClass> shPtr2 = shPtr1;
    //     cout << "Shared count: " << shPtr1.use_count () << endl;
    // }
    // cout << "Shared count: " << shPtr1.use_count () << endl;

    weak_ptr <int> wePtr1;
    {
        shared_ptr <int> shPtr1 = make_shared <int> (25);
        wePtr1 = shPtr1;
    }
}
*/


// Difference between pointers and references ( https://stackoverflow.com/questions/57483/what-are-the-differences-between-a-pointer-variable-and-a-reference-variable-in )

int main () {
    int x, y;
// 1) *****************************************************************************************
    cout << "1)\n";
    // A pointer can be re-assigned
    x = 5; y = 6;
    int *p;
    p = &x; p = &y;
    *p = 10;
    cout << "x == 5: " << (x == 5) << " x is " << x << endl;         // x == 5: 1 x is 5
    cout << "y == 10: " << (y == 10) << " y is " << y << endl;       // y == 10: 1 y is 10

    // A reference cannot be re-bound, and must be bound at initialization
    x = 5; y = 6;
    // int &q;  error
    int &q = x;
    q = y; q = 10;
    cout << "x == 5: " << (x == 5) << " x is " << x << endl;         // x == 5: 0 x is 10
    cout << "y == 10: " << (y == 10) << " y is " << y << endl;       // y == 10: 0 y is 6

// 2) *****************************************************************************************
    cout << "\n2)\n";
    x = 0;
    int &r = x;
    int *k = &x;
    int *k2 = &r;

    cout << "k == k2: " << (k == k2) << endl;                       // &x == &r
    cout << "&k != &k2: " << (&k != &k2) << endl;

// 3) *****************************************************************************************
    cout << "\n3)\n";
    x = 0; y = 0;
    int *m = &x;
    int *n = &y;
    int **mm = &m;

    **mm = 2;
    mm = &n; // *mm is now n
    **mm = 4;

    cout << "y == 4: " << (y == 4) << " y is " << y << endl;        // y == 4: 1 y is 4
    cout << "x == 2: " << (x == 2) << " x is " << x << endl;        // x == 2: 1 x is 2
}
