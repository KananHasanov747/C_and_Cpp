#include <cstdio>

int main () {
    char x = 'M';
    wchar_t y = L'Z';
    printf ("Windows binaries start with %c%lc.\n", x, y);
    printf ("\U0001F37A\n");    // Кружка пива
}