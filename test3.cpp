#include <iostream>
#define TRUE 1

int main (void) {
	const unsigned DIM = 10;
	double A[DIM][DIM];
	unsigned n, m, i, j, imax, jmax;
	while (TRUE) {
	    printf ("n, m <= DIM", DIM); std::cin >> n >> m;
	    if ((n > 0) && (n <= DIM) && (m > 0) && (m <= DIM)) break;

        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                A [i][j] = 10 / (i + j + 1);
                std::cout << A [i][j];
            }
        }
    }
}