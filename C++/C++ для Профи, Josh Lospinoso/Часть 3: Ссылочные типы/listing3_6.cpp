#include <cstdio>

int main () {
    char lower[] = "abc?e";
    char upper[] = "ABC?E";
    char* upper_ptr = upper;    // Эквивалент: &upper [0]

    lower [3] = 'd';            // сейчас lower содержит a b c d e \0
    upper_ptr [3] = 'D';        // сейчас upper содержит A B C D E \0
    

    char letter_d = lower [3];      // letter_d эквивалентна 'd'
    char letter_D = upper_ptr [3];  // letter_D эквивалентна 'D'

    printf ("lower: %s\nupper: %s\n", lower, upper);
    lower [7] = 'g';                // Это очень плохо. Никогда так не делайте.
}