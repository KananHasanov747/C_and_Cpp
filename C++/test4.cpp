#include <iostream>
#include <iomanip>

using namespace std;

int const n = 6, m = 6;

int main () {
    int a[n][m];
    int sm, k = 0;

    srand (time (NULL));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            a [i][j] = rand () % 50 - 20;
            cout << setw(7) << a[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < m; i++) {
        sm = 0;
        for (int j = 0; j < n; j++) sm += a[j][i];
        for (int j = 0; j < n; j++)
            if (a[j][i] > sm) k++;
    }

    cout << "k = " << k << endl;
    system ("pause");
    return 0;
}