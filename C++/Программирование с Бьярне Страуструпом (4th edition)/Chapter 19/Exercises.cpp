#include "./Task.cpp"

// Задание №1
template <typename T>
void f (vector <T>& v1, vector <T>& v2) {
    if (v1.sz > v2.sz) throw std::runtime_error ("not enough value in v2");
    for (int i = 0; i < v1.sz; ++i) v1 [i] += v2 [i];
}

// Задание №2
template <typename T, typename U>
T ff (vector <T>& vt, vector <U>& vu) {
    if (vt.sz != vu.sz)
        throw std::runtime_error ("cannot sum different sized vectors");
    
    T sum = 0;
    for (int i = 0; i < (vt.sz > vu.sz) ? vu.sz : vt.sz; ++i) {
        sum += vt [i] * vu [i];
    }
    return sum;
}