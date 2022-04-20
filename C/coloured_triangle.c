#include <stdio.h>
#include <string.h>
#include <math.h>

unsigned Lucas (unsigned n, unsigned k) {
    unsigned res = 1;
    unsigned n3, k3;
    while (n > 0) {
        n3 = n % 3, k3 = k % 3;
        if (k3 > n3) return 0;
        if (k3 == 1 && n3 == 2) res = res * 2;
        n /= 3, k /= 3;
    }
    return res;
}

char int_2_char (int i) {
    switch (i) {
        case 0: return 'R';
        case 1: return 'G';
        case 2: return 'B';
        default: return '\0';
    }
}

unsigned char_2_int (char c) {
    switch (c) {
        case 'R': return 0;
        case 'G': return 1;
        case 'B': return 2;
        default: return 3;
    }
}

char triangle (const char *row) {
    unsigned n = strlen (row) - 1, sum = 0;
    for (unsigned k = 0; k < n + 1; k++) {
        sum = (sum + Lucas (n, (k < n / 2) ? k : n - k) * char_2_int (row [k])) % 3;
    }
    if (n % 2 == 1) sum = -sum;
    return int_2_char (sum % 3);
}

int main () {
    printf ("%c\n", triangle ("RGBG")); // B
    printf ("%c\n", triangle ("RBRGBRB")); // G
    printf ("%c\n", triangle ("RBRGBRBGGRRRBGBBBGG")); // G
    printf ("%c", sqrt (4));
}