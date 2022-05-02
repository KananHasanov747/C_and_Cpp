#include <iostream>
using std::cout;


template <typename Iterator>
Iterator high (Iterator first, Iterator last) {
    Iterator high = first;
    for (Iterator p = first; p != last; ++p)
        if (*high < *p) high = p;
    return high;
}

template <typename Elem> class list {
public:
    class iterator;         // Тип - член класса: iterator

    iterator begin ();      // Итератор, указывающий на первый элемент
    iterator end ();        // Итератор, указывающий на элемент,
                            // следующий за последним

    iterator insert (iterator p,        // Вставка 'v' в список
                     const Elem& v);    // после элемента, на который
                                        // указывает итератор 'p'
    iterator erase (iterator p);        // Удаление из списка элемента,
                                        // на который указывает итератор 'p'

    void push_back (const Elem& v);     // Вставка 'v' в конец списка
    void push_front (const Elem& v);    // Вставка 'v' в начало списка
    void pop_front ();                  // Удаление первого элемента
    void pop_back ();                   // Удаление последнего элемента

    Elem& front ();                     // Первый элемент
    Elem& back ();                      // Последний элемент
};

template <typename Elem> class list <Elem>::iterator {
    Link <Elem>* curr;
public:
    iterator (Link* p) : curr {p} { }

    // Вперед:
    iterator& operator++ () { curr = curr -> succ; return *this; }

    // Назад:
    iterator& operator-- () { curr = curr -> prev; return *this; }

    // Разыменование (получение значения):
    Elem& operator* () { return curr -> val; }

    bool operator== (const iterator& b) const
        { return curr == b.curr; }
    bool operator!= (const iterator& b) const
        { return curr != b.curr; }
};

int main () {
    
}