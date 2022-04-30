#include "../std_lib_facilities.h"
// #include <iostream>
// #include <vector>

// using namespace std;

/*
class vector {
    int sz;             // Размер
    double* elem;       // Указатель на элементы
public:
    vector (int s) : sz {s}, elem {new double [s]}  // Конструктор
        { for (int i = 0; i < s; ++i) elem [i] = 0;}

    ~vector () { delete[] elem; }       // Деструктор
    int size () const { return sz; }    // Текущий размер

    double get (int n) const { return elem [n]; }   // Чтение
    void set (int n, double v) { elem [n] = v; }    // Запись
};
*/

// 17.3.1
void sizes (char ch, int i, int* pi, bool b, double d, double* pd) {
    std::cout << "размер типа char равен " << sizeof (char)   << ' '
              << sizeof (ch) << '\n';
    std::cout << "размер типа int  равен " << sizeof (int)    << ' '
              << sizeof (i) << '\n';
    std::cout << "размер типа int* равен " << sizeof (int*)   << ' '
              << sizeof (pi) << '\n';
    std::cout << "размер типа bool равен " << sizeof (bool)   << ' '
              << sizeof (b) << '\n';
    std::cout << "размер типа double равен " << sizeof (double) << ' '
              << sizeof (d) << '\n';
    std::cout << "размер типа double* равен " << sizeof (double*) << ' '
              << sizeof (pd) << '\n';
}

class Link {
public:
    string value;
    Link (const string& v, Link* p = nullptr, Link* s = nullptr)
        : value {v}, prev {p}, succ {s} {}

    Link* insert (Link*);
    Link* add (Link*);
    Link* erase ();
    Link* find (const string&);
    const Link* find (const string&) const;
    Link* advance (int) const;

    Link* next () const { return succ; }
    Link* previous () const { return prev; }
private:
    Link* prev;
    Link* succ;
};

Link* Link::insert (Link* n) { // Вставка n перед p; возврат n
    if (n == nullptr) return this;
    if (this == nullptr) return n;
    n -> succ = this;          // p следует за n
    if (prev) prev -> succ = n;
    n -> prev = prev;  // Предшественник p становится
                            // предшественником n
    prev = n;          // n становится предшественником p
    return n;
}

Link* Link::erase () {         // Удаление *p из списка; возврат приемника p
    if (this == nullptr) return nullptr;
    if (succ) succ -> prev = prev;
    if (prev) prev -> succ = succ;
}

Link* Link::find (const string& s)   // Поиск s в списке;
                        // возврат nullptr, если не найден
{
    Link* p = this;
    while (p) {
        if (p -> value == s) return p;
        p = p -> succ;
    }
    return nullptr;
}

void print_all (Link* p) {
    cout << "{ ";
    while (p) {
        cout << p -> value;
        if (p = p -> next ()) cout << ", ";
    }
    cout << " }";
}

int main () {
    // int   x = 17;
    // int* pi = &x;

    // double   e = 2.71828;
    // double* pd = &e;

    // vector <int> v (1000);
    // cout << sizeof (v) << '\n';

    // double* p = new double [4];
    // *p = 2; // *p = p [0]

    // int x; double d;
    // vector v (4);
    // x = v.size ();
    // d = v.get (3);
    // vector* p = new vector (4);
    // x = p -> size ();
    // d = p -> get (3);


    // Link* norse_gods = new Link {"Thor"};
    // norse_gods = norse_gods -> insert (new Link {"Odin"});
    // norse_gods = norse_gods -> insert (new Link {"Zeus"});
    // norse_gods = norse_gods -> insert (new Link {"Freia"});

    // Link* greek_gods = new Link {"Hera"};
    // greek_gods = greek_gods -> insert (new Link {"Athena"});
    // greek_gods = greek_gods -> insert (new Link {"Mars"});
    // greek_gods = greek_gods -> insert (new Link {"Poseidon"});

    // Link* p = greek_gods -> find ("Mars");
    // if (p) p -> value = "Ares";

    // Link* p2 = norse_gods -> find ("Zeus");
    // if (p2) {
    //     if (p2 == norse_gods) norse_gods = p2 -> next ();
    //     p2 -> erase ();
    //     greek_gods = greek_gods -> insert (p2);
    // }

    // print_all (norse_gods); cout << "\n";
    // print_all (greek_gods); cout << "\n";
}