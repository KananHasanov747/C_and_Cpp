#include <iostream>
#include <initializer_list>
// #include "../std_lib_facilities.h"
using std::cout;
using std::endl;
using std::initializer_list;
using std::copy;

class vector {
    int sz;             // Размер
    double* elem;       // Указатель на элементы
public:
    vector& operator= (const vector&);  // Копирующее присваивание
    vector (const vector&);     // Копирующий конструктор
    vector (int s) : sz {s}, elem {new double [s]}  // Конструктор
        { for (int i = 0; i < s; ++i) elem [i] = 0.0;}
    
    vector (initializer_list <double> lst) 
        : sz {static_cast <int> (lst.size ())}, // добавлено static_cast <int> () из-за ошибки в книге
          elem {new double [sz]} {
        copy ( lst.begin (), lst.end (), elem );
    }

    ~vector () { delete[] elem; }       // Деструктор
    int size () const { return sz; }    // Текущий размер

    double get (int n) const { return elem [n]; }   // Чтение
    void set (int n, double v) { elem [n] = v; }    // Запись
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

void print_all (vector& arg) {
    cout << "{ ";
    for (int i = 0; i < arg.size (); ++i) cout << arg.get (i) << ' ';
    cout << "}" << endl;
}

int main () {
    vector v (3);
    v.set (2, 2.2);
    vector v2 {v};
    // vector v2 (4);
    // v2 = v;
    // print_all (v);
    print_all (v2);
}