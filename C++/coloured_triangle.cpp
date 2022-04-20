#include <iostream>
#include <string>


unsigned Lucas (unsigned n, unsigned k) { // The Lucas's theorem
    unsigned res = 1;
    while (n > 0) {
        unsigned n3 = n % 3, k3 = k % 3;
        if (k3 > n3) return 0;
        res *= (k3 == 1 && n3 == 2) ? 2 : 1;
        n /= 3, k /= 3;
    }
    return res % 3;
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

char triangle (const std::string &row) {
    unsigned n = row.length () - 1, sum = 0;
    for (unsigned k = 0; k < n + 1; k++) {
        sum += (sum + Lucas (n, (k < 2) ? k : n - k) * char_2_int (row [k])) % 3;
    }
    if (n % 2 == 1) sum = -sum;
    return int_2_char (sum % 3);
}

int main () {
    printf ("%c\n", triangle ("RGG")); // R
    printf ("%c\n", triangle ("RGBG")); // B
    printf ("%c\n", triangle ("RBRGBRB")); // G
    printf ("%c\n", triangle ("RBRGBRBGGRRRBGBBBGG")); // G
}
