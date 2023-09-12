/*

t - target, s - size

1d [t1] = 1d [t1]
2d [t1][t2] = 1d [t1 * s1 + t2]
3d [t1][t2][t3] = 1d [t1 * s1 * s2 + t2 * s1 + t3]
nd [t1][t2][t3]...[tn] = 1d [t1 * s1 * s2 * ... * s(n-1) + t2 * s1 * s2 * ... * s(n - 2) + ... + t(n-1) * s1 + tn]

*/


// #define TRUE 1

// int main (void) {
// 	const unsigned DIM = 10;
// 	double A[DIM][DIM];
// 	unsigned n, m, i, j, imax, jmax;
// 	while (TRUE) {
// 	    printf ("n, m <= DIM", DIM); std::cin >> n >> m;
// 	    if ((n > 0) && (n <= DIM) && (m > 0) && (m <= DIM)) break;

//         for (i = 0; i < n; i++) {
//             for (j = 0; j < m; j++) {
//                 A [i][j] = 10 / (i + j + 1);
//                 std::cout << A [i][j];
//             }
//         }
//     }
// }