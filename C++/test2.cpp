#include <iostream>

int main () {
    const int n = 10;
    int i; double A [n], SA;
    for (i = 0; i < n; i++) { std::cout << "A [" << i << "] = "; std::cin >> A [i]; }
    SA = 0;
    for (i = 0; i < n; i++) SA += A [i];
    SA = SA / n;
    std::cout << "переднее значение = " << SA;
    return 0;
}