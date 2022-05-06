#include <cstdio>

int main () {
    unsigned short a = 0b10'10'10'10;
    printf ("%hu\n", a);
    int b = 0123;
    printf ("%d\n", b);
    unsigned long long d = 0xFFFF'FFFF'FFFF'FFFF;
    printf ("%llu\n", d);
}