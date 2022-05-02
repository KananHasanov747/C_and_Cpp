// #include "../std_lib_facilities.h"
#include <iostream>
using std::cout;
using std::endl;


#include <initializer_list>
using std::initializer_list;
using std::copy;

class vector {
    int sz;             // Размер
    double* elem;       // Указатель на элементы
public:
    vector (vector&&);  // Перемещающий конструктор
    vector& operator= (vector&&);       // Перемещающее присваивание

    vector (const vector&);     // Копирующий конструктор
    vector& operator= (const vector&);  // Копирующее присваивание

    vector (int s) : sz {s}, elem {new double [s]}  // Конструктор
        { for (int i = 0; i < s; ++i) elem [i] = 0.0;}
    
    vector (initializer_list <double> lst) 
        : sz {static_cast <int> (lst.size ())}, // добавлено static_cast <int> () из-за ошибки в книге
          elem {new double [sz]} {
        copy ( lst.begin (), lst.end (), elem );
    }

    ~vector () { delete[] elem; }       // Деструктор
    int size () const { return sz; }    // Текущий размер

    // double get (int n) const { return elem [n]; }   // Чтение
    // void set (int n, double v) { elem [n] = v; }    // Запись

    // Возврат ссылки (§18.5)
    double& operator[] (int n) { return elem [n]; }         // Для неконстантных векторов
    double operator[] (int n) const { return elem [n]; };   // Для константных векторов
};

// Копирующий конструктор
vector::vector (const vector& arg) : sz {arg.sz}, elem {new double [arg.sz]} {
    copy (arg.elem, arg.elem + sz, elem);
    // вместо copy (arg, arg + sz, elem), так как она выдавало ошибку
}

// Копирующее присваивание
vector& vector::operator= (const vector& a) {
    double* p = new double [a.sz];          // Выделение памяти
    copy (a.elem, a.elem + a.sz, p);        // Копирование элементов
    delete[] elem;                          // Освобождение памяти
    elem = p;                               // Переназначение указателя
    sz = a.sz;
    return *this;                           // Возврат ссылки на себя
}

// Перемещающий конструктор
vector::vector (vector&& a) 
: sz {a.sz}, elem {a.elem} {    // Копируем elem и sz из a
    a.sz = 0;                   // Делаем вектор а пустым
    a.elem = nullptr;
}

// Перемещающее присваивание
vector& vector::operator= (vector&& a) {    // Перемещаем 'a' в текущий вектор
    delete[] elem;      // Освобождение старой памяти
    elem = a.elem;      // Копирование elem и sz из a
    sz = a.sz;
    a.elem = nullptr;   // Делаем вектор 'a' пустым
    a.sz = 0;
    return *this;       // Возврат ссылки на себя
}

void print_all (vector& arg) {      // вывод элементов вектора
    cout << "{ ";
    for (int i = 0; i < arg.size (); ++i) cout << arg [i] << ' ';
    cout << "}" << endl;
}

// Проверка константных и неконстантных вариантов []
// void ff (const vector& cv, vector& v) {
//     double d = cv [1];  // Отлично (константный вариант [])
//     cv [1] = 2.0;       // Ошибка  (константный вариант [])
//     d = v [1];          // Отлично (неконстантный вариант [])
//     v [1] = 2.0;        // Отлично (неконстантный вариант [])
// }

// §18.6
// void f2 () {
//     char lac [20];
//     lac [-2] = 'b';
//     lac [200] = 'c';
// }

int main () {
    // vector v (3);
    // v.set (2, 2.2);

    // vector v2 {v};   // копирование инициализацием
    // vector v2 (4); v2 = v;   // копирование присваиванием
    // v2.set (0, 1.5);

    // print_all (v);
    // print_all (v2);

    // int x = v [2];
    // v [1] = x;

    // f2 ();
}


// §18.4.2
/*
#include <string>
#include <vector>
using std::vector;

struct X {  // Простой тестовый класс
    int val;

    void out (const std::string& s, int nv) {
        std::cerr << this << " -> " << s << ": " << val
                  << " (" << nv << ")\n";
    }
    X () { out ("X()", 0); val = 0; }   // Конструктор по умолчанию
    X (int v) { val = v; out ( "X(int)", v ); }
                                        // Копирующий конструктор:
    X (const X& x) { val = x.val; out ("X(X&) ", x.val); }
    X& operator= (const X& a) {         // Копирующее присваивание
        out ("X::operator=()", a.val);
        val = a.val; return *this;
    }
    ~X() { out ("~X()", 0); }           // Деструктор
};

X glob (2);         // Глобальная переменная

X copy (X a) { return a; }

X copy2 (X a) { X aa = a; return aa; }

X& ref_to (X& a) { return a; }

X* make (int i) { X a (i); return new X (a); }

struct XX { X a; X b; };

int main () {
    cout << endl; cout << "X loc {4}\t\t\t// Локальная переменная" << endl;
    X loc {4};              // Локальная переменная

    cout << endl; cout << "X loc2 {loc}\t\t\t// Копирующий конструктор" << endl;
    X loc2 {loc};           // Копирующий конструктор

    cout << endl; cout << "loc = X {5}\t\t\t// Копирующее присваивание" << endl;
    loc = X {5};            // Копирующее присваивание

    cout << endl; cout << "loc2 = copy (loc)\t\t// Передача по значению и возврат" << endl;
    loc2 = copy (loc);      // Передача по значению и возврат

    cout << endl; cout << "loc2 = copy2 (loc)" << endl;
    loc2 = copy2 (loc);

    cout << endl; cout << "X loc3 {6}" << endl;
    X loc3 {6};

    cout << endl; cout << "X& r = ref_to (loc)\t\t// Передача по ссылке и возврат" << endl;
    X& r = ref_to (loc);    // Передача по ссылке и возврат

    cout << endl; cout << "delete make (7)" << endl;
    delete make (7);

    cout << endl; cout << "delete make (8)" << endl;
    delete make (8);

    cout << endl; cout << "vector <X> v (4)\t\t// Значения по умолчанию" << endl;
    vector <X> v (4);       // Значения по умолчанию

    cout << endl; cout << "XX loc4" << endl;
    XX loc4;

    cout << endl; cout << "X* p = new X {9}\t\t// X в динамической памяти" << endl;
    X* p = new X {9};       // X в динамической памяти

    cout << endl; cout << "delete p" << endl;
    delete p;

    cout << endl; cout << "X* pp = new X [5]\t\t// Массив X в динамической памяти" << endl;
    X* pp = new X [5];      // Массив X в динамической памяти

    cout << endl; cout << "delete[] pp" << endl;
    delete[] pp;
}
*/