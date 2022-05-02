// #include "../std_lib_facilities.h"
#include <iostream>
using std::cout;
using std::endl;
using std::string;

#include <initializer_list>
#include <stdexcept>
using std::initializer_list;
using std::copy;
using std::out_of_range;

template <typename T> class allocator {
public:
    T* allocate (int n) { return (T*) malloc (n * sizeof (T)); }
    void deallocate (T* p) { free (p); }

    void construct (T* p, const T& v) { new (p) T {v}; }
    void destroy (T* p) { p -> ~T (); }
};

template <typename T, typename A = allocator <T>> 
class vector {
    int sz;             // Размер
    T* elem;            // Указатель на элементы
    int space;          // Количество элементов плюс "свободное
                        // место"/"слоты" для новых элементов
                        // (текущий выделенный размер)
    A alloc;            // Распределитель памяти
public:
    vector () : sz {0}, elem {nullptr}, space {0} { }
    explicit vector (int s) : sz {s}, elem {new T [s]}, space {s}  // Конструктор
    { 
        elem = alloc.allocate (s);
        for (T* p = elem; p != elem + s; ++p) alloc.construct (p, 0);
    }

    vector (const vector&);     // Копирующий конструктор
    vector& operator= (const vector&);  // Копирующее присваивание

    vector (vector&&);  // Перемещающий конструктор
    vector& operator= (vector&&);       // Перемещающее присваивание
    
    ~vector () {                // Деструктор
        for (T* p = elem; p != elem + sz; ++p) alloc.destroy (p);
        alloc.deallocate (elem);
    }

    // Возврат ссылки
    T& at (int);                // Доступ с проверкой
    const T& at (int) const;    // Доступ с проверкой

    // Возврат ссылки (§18.5)
    T& operator[] (int n) { return elem [n]; }         // Для неконстантных векторов
    const T& operator[] (int n) const { return elem [n]; };   // Для константных векторов
    
    int size () const { return sz; }    // Текущий размер
    int capacity () const { return space; }

    void reserve (int);
    void push_back (const T&);
    void resize (int, T = T ());
};

// Копирующий конструктор
template <typename T, typename A> 
vector <T, A>::vector (const vector <T, A>& arg) : sz {arg.sz}, elem {nullptr}, space {arg.sz} {
    copy (arg.elem, arg.elem + sz, elem);
    // вместо copy (arg, arg + sz, elem), так как она выдавало ошибку
}

// Копирующее присваивание
template <typename T, typename A> 
vector <T, A>& vector <T, A>::operator= (const vector <T, A>& a) {
    // Похож на конструктор копирования,
    // но мы должны разобраться со старыми элементами

    if (this == &a) return *this;   // Самоприсваивание, ничего делать не надо

    if (a.sz <= space) {    // Памяти достаточно, новая память не нужна
        for (int i = 0; i < a.sz; ++i) elem [i] = a.elem [i];   // Копируем элементы
        for (int i = a.sz; i < sz; ++i) alloc.destroy (&elem [i]);
        sz = a.sz;
        return *this;
    }

    T* p = alloc.allocate (a.sz);   // Выделяем новую память
    copy (a.elem, a.elem + a.sz, p);
    for (T* q = elem; q != elem + sz; ++q) alloc.destroy (q);// Копируем элементы
    alloc.deallocate (elem);        // Освобождаем старую память
    space = sz = a.sz;              // Устанавливаем новый размер
    elem = p;                       // Устанавливаем указатель на новые элементы
    return *this;                   // Возвращаем ссылку на себя
}

// Перемещающий конструктор
template <typename T, typename A> 
vector <T, A>::vector (vector <T, A>&& a) 
: sz {a.sz}, elem {a.elem}, space {a.space} {    // Копируем elem и sz из a
    a.sz = 0;                   // Делаем вектор а пустым
    a.elem = nullptr;
}

// Перемещающее присваивание
template <typename T, typename A> 
vector <T, A>& vector <T, A>::operator= (vector <T, A>&& a) {    // Перемещаем 'a' в текущий вектор
    for (T* p = elem; p != elem + sz; ++p) alloc.destroy (p);
    alloc.deallocate (elem);      // Освобождение старой памяти
    elem = a.elem;                // Копирование elem и sz из a
    sz = a.sz;
    space = a.space;
    a.elem = nullptr;   // Делаем вектор 'a' пустым
    a.sz = 0;
    return *this;       // Возврат ссылки на себя
}

template <typename T, typename A> 
void vector <T, A>::reserve (int newalloc) {
    if (newalloc <= space) return;  // Размер никогда не уменьшается
    T* p = alloc.allocate (newalloc);  // Выделение новой памяти
    for (int i = 0; i < sz; ++i) alloc.construct (&p [i], elem [i]);  // Копируем старые элементы
    for (int i = 0; i < sz; ++i) alloc.destroy (&elem [i]);
    alloc.deallocate (elem);      // Освобождение старой памяти
    elem = p;
    space = newalloc;
}

template <typename T, typename A> 
void vector <T, A>::resize (int newsize, T val) {
    // Создает вектор, содержащий newsize элементов
    // Инициализируем каждый элемент значением по умолчанию 0.0
    reserve (newsize);
    for (int i = sz; i < newsize; ++i) alloc.construct (&elem [i], val);
    for (int i = newsize; i < sz; ++i) alloc.destroy (&elem [i]);
    sz = newsize;
}

template <typename T, typename A> 
void vector <T, A>::push_back (const T& d) {
    // Увеличивает размер вектора на единицу;
    // инициализирует новый элемент значением d
    if (space == 0) reserve (8);    // Выделяем память для 8 элементов
    else if (sz == space) reserve (2 * space);  // Выделяем дополнительную память
    alloc.construct (&elem [sz], d);  // Добавляем d в конец вектора
    ++sz;           // увеличиваем количество элементов
}

// Проверка диапазона
template <typename T, typename A>
T& vector <T, A>::at (int n) {
    if (n < 0 || sz <= n) throw out_of_range ("");
    return elem [n];
}

// template <typename T, typename A>
// void print_all (vector <T, A>& arg) {      // вывод элементов вектора
//     cout << "{ ";
//     for (int i = 0; i < arg.size (); ++i) cout << arg [i] << ' ';
//     cout << "}" << endl;
// }

// int main () {
//     vector <char> v (4);
//     print_all (v);
// }