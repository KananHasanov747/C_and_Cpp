#include <iostream>
#include <vector>
#include <numeric>

using namespace std;
//===-----------------------------Subset Sum method-----------------------------===//

/*
int subset_sum (std::vector <int> const &A, int k) {
    int n = A.size ();

    bool L [n + 1][k + 1];

    // if 0 items in the list and the sum is non-zero
    for (int j = 1; j <= k; j++) L [0][j] = false;
 
    // if the sum is zero
    for (int i = 0; i <= n; i++) L [i][0] = true;
 
    // do for i'th item
    for (int i = 1; i <= n; i++) {
        // consider all sum from 1 to sum
        for (int j = 1; j <= k; j++) {
            // don't include the i'th element if `j - A [i - 1]` is negative
            if (A [i - 1] > j) L [i][j] = L [i - 1][j];
            // find the subset with sum `j` by excluding or including the i'th item
            else L [i][j] = L [i - 1][j] || L [i - 1][j - A [i - 1]];
        }
    }

    std::cout << '\t' << '\t';
    for (int j = 0; j <= k; j++) std::cout << j << '\t';
    std::cout << std::endl;
    for (int i = 0; i <= n; i++) {
        std::cout << A[i] << '\t' << i << '\t';
        for (int j = 0; j <= k; j++) {
            std::cout << L [i][j] << '\t';
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;

    if ((bool) L [n][k]) {
        int m = n, b = k;
        std::vector <int> S;

        while (b > 0) {
            if ((bool) L [m - 1][b]) m--;
            else {
                m--;
                S.push_back (A [m]);
                b -= A [m];
            }
            std::cout << m << '\t' << b << std::endl;
        }

        for (int i = 0; i < S.size (); i++) {
            std::cout << S [i] << "\t";
        }
    }
    return 0;
}
*/

class Subset_Sum {

    public:
    // BACKTRACKING ALGORITHM
    void subsetsum_Backtracking(vector <int> &Set , int pos, int sum, vector <int> res) {
        if (sum == accumulate (res.begin (), res.end (), 0)) {
            for (int i = 0; i < res.size (); i++) cout << res [i] << '\t';
            cout << endl;
        }
        
        // generate nodes along the breadth
        for (int i = pos; i < Set.size (); i++) {
            if (accumulate (res.begin (), res.end (), 0) + Set [i] <= sum) {
                res.push_back (Set [i]);
                // consider next level node (along depth)
                subsetsum_Backtracking (Set, i + 1, sum, res);
                remove (res.begin (), res.end (), Set[i]);
            }
        }
    }
};

int main () {
    vector <int> A = {7, 3, 5, 2, 4};

    Subset_Sum S;
    S.subsetsum_Backtracking (A, 0, 12, {});
}