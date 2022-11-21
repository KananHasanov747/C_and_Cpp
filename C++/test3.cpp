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


// int PARTITION (double A [], int p, int r) {
//     double tmp = 0, x = A [r];
//     int i = p - 1;
//     for (int j = p; j < r; j++)
//         if (A [j] <= x) {
//             i++;
//             tmp = A [i];
//             A [i] = A [j];
//             A [j] = tmp;
//         }
//     tmp = A [i + 1];
//     A [i + 1] = A [r];
//     A [r] = tmp;
//     return i + 1;
// }

// void QUICKSORT (double A [], int p, int r) {
//     int q = 0;
//     if (p < r) {
//         q = PARTITION (A, p, r);
//         QUICKSORT (A, p, q - 1);
//         QUICKSORT (A, q + 1, r);
//     }
// }

#include <iostream>
#include <vector>

// Лабораторная №1



// void func1_1 (int X [], int Y [], int k) {
//     int sum = 0, max = X [0], len = sizeof (X) / sizeof (*X);
//     for (int i = 0; i < len; i += 2) sum += X [i]; // сумма четных элементов массива

//     for (int i = 0; i < len; i++) // наибольшее из отрицательных чисел массива
//         if (max > 0 || (X [i] > max && X [i] < 0)) max = X [i];
// }


void func1_2 (double* A, size_t lenA, double* B, size_t lenB) {
    // int lenA = sizeof (A) / sizeof (*A), lenB = sizeof (B) / sizeof (*B);
    double mul = 1, sum = 0, min = A [0], max = A [0];
    int index = 0;

    for (int i = 0; i < lenA; i++) {
        if (A [i] > 0) mul *= A [i]; // произведение положительных элементов массива
        if (A [i] > max) { max = A [i]; index = i; } // нахождение максимального элемента массива
    }
    for (int i = index + 1; i < lenA; i++) if (A [i] < 0) sum += A [i]; // сумма отрицательных чисел после макс. эл. массива

    // Создание нового массива, которая хранит в себе два предыдущих массива
    std::vector <double> C (lenA + lenB);
    for (int i = 0; i < C.size (); i++) 
        if (i < lenA) C [i] = A [i];
        else C [i] = B [i - lenA];

    // std::copy(A, A + lenA, std::back_inserter (C));
    // std::copy(B, B + lenB, std::back_inserter (C));

    for (double& i : C) i = -i; // изменение знака каждого элемента массива

    C.erase (C.begin () + (C.size () - 2)); // удаление предпоследнего элемента массива

    for (double i : C) std::cout << i << ", ";
    std::cout << std::endl;

    std::cout << "\n" << "mul = " << mul << ", sum = " << sum << std::endl;
}


// void func1_3 (int A []) {
//     int mul = 1, min = A [0], index = 0, len = sizeof (A) / sizeof (*A);
//     for (int i = 0; i < len; i++) {
//         if (A [i] != 0) mul *= A [i]; // произведение ненулевых элементов массива
//         if (A [i] < min) { min = A [i]; index = i; } // нахождение минимального элемента массива
//     }

//     int sum = 0;
//     for (int i = 0; i < index; i++) if (A [i] % 2 == 0) sum += A [i]; // сумма четных чисел до мин. эл. массива
//     int* B = new int [len / 2];
// }

/*
void func1_7 (int* B, size_t lenB, int* C, size_t lenC) {
    int mul = 1, max = B [0];
    for (int i = 0; i < lenB; i++) {
        if (i % 2 == 0 && B [i] < 0) mul *= B [i]; // произведение отрицательных чисел с четными индексами
        if (B [i] > max && B [i] % 3 == 0) max = B [i]; // максимальный элемент среди элементов кратных числу 3
    }

    // Создание нового массива, которая хранит в себе два предыдущих массива
    int tmp = 0; 
    std::vector <int> A (lenB + lenC);
    for (int i = 0; i < A.size (); i++) {
        if (i < lenB) A [i] = B [i];
        else A [i] = C [i - lenB];
    }

    int i = 0;
    while (i < A.size ()) { // удаление отрицательных элементов массива
        if (A [i] < 0) A.erase (A.begin () + i);
        else i++;
    }

    for (int i = 0; i < A.size (); i++) if (A [i] % 17 == 0) { A.erase (A.begin () + i); break; }

    for (int i : A) std::cout << i << ", "; std::cout << std::endl;
}
*/

void func1_4 (int* X, size_t lenX, int* Y, size_t lenY) {
    int sum = 0, len = 0;
    for (int i = 0; i < lenX; i++) {
        if (X [i] == 0) len = i;
        if (i % 2 == 0 && X [i] > 0) sum += X [i]; // сумма положительных четных элементов массива
    }

    // Создание нового массива, которая хранит в себе два предыдущих массива
    int tmp = 0; 
    std::vector <int> Z (lenX + lenY);
    for (int i = 0; i < Z.size (); i++) {
        if (i < lenX) Z [i] = X [i];
        else Z [i] = Y [i - lenX];
    }

    int index = 0, max = 1;
    for (int i = 0; i < Z.size (); i++) if (Z [i] > max) { max = Z [i]; index = i; } // нахождение наибольшего элемента массива

    Z.erase (Z.begin () + index); // удаление наибольшего элемента массива

    for (int i : Z) std::cout << i << ", "; std::cout << std::endl;
    std::cout << "sum = " << max << ", len = " << Z.size () - len - 1 << std::endl;
}


// // Лабораторная №2

#include <iostream>
#include <iomanip>

using namespace std;

void func_2_1 () {
    int N = 0, M = 0;
    cout << "Введите размер массива (N x M): "; cin >> N >> M;
    int A [N][M];

    srand (time (NULL));

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            A [i][j] = rand () % 148 / 5  - 23;

    std::cout << "Исходный массив `A`" << std::endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++)
            std::cout << std::setw (7) << A [i][j];
        std::cout << std::endl;
    }

    int col = rand () % (M + M / 3);
    if (col < M) for (int i = 0; i < N; i++) A [i][col] = 0;

    int B [M];
    for (int i : B) i = 1;
    
    for (int j = 0; j < M; j++)
        for (int i = 0; i < N; i++) {
            if (A [i][j] == 1) continue;
            B [j] = 0;
        }

    std::cout << "массив `B`" << std::endl;
    for (int j = 0; j < M; j++) std::cout << std::setw (7) << B [j];
    std::cout << std::endl;
}

void func2_2 (int** A, size_t N, size_t M) {
    srand (time (NULL)); // Calling the method srand(). The key is time(NULL) returns the current calendar time (seconds since Jan 1, 1970)
    
    // Filling the Array `A` with random values
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            *(*(A + i) + j) = rand() % 65 / 2 - 15;

    std::cout << "Output of Array `A`" << std::endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++)
            std::cout << std::setw (7) << *(*(A + i) + j);
        std::cout << std::endl;
    }

    int B [N]; // Declaring another Array `B`
    for (int& i : B) i = 1; // Filling the Array `B` with value '1'

    // Finding the unsorted rows (from largest to smallest)
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M - 1; j++)
            if (*(*(A + i) + j) < *(*(A + i) + (j + 1))) *(B + i) = 0;

    std::cout << "Output of Array `B`" << std::endl;
    for (auto &i : B) std::cout << i << "\t";
    std::cout << std::endl;
}

// int main () {
//     int N=5, M=5, k=0, tmp=0;
//     int A [N][M];

//     srand (time (NULL));

//     for (int i = 0; i < N; i++)
//         for (int j = 0; j < M; j++)
//             A [i][j] = (rand() % 24 - 15) * 3;

//     for (int i = 0; i < N; i++)
//         for (int j = 1; j < M - 1; j++)
//             if (A [i][j - 1] < A [i][j] && A [i][j + 1] > A [i] [j]) k++;
// }



// #include <iostream>

// using namespace std;

// int main () {
//     int N=5, M=5, k=0; // создание трех переменных: размер массива N и M, а также количество особых элементов "k"
//     char A [N][M]; // создание матрицы A размером N на M

//     srand (time (NULL)); // метод srand с ключом time (NULL)

//     // заполнение массива элементами
//     for (int i = 0; i < N; i++)
//         for (int j = 0; j < M; j++)
//             A [i][j] = (char)(rand() % 26 + 97); // заполнение матрицы символами. 26 Здесь обозначает количество букв в английском алфавите,
//                                                  // 97 - начало обозначения прописных букв по системе UTF-8

//     int len = N * M; char tmp [len]; // создание одной переменной len и одного одномерного массива tmp размером len

//     // заполнение массива tmp всеми элементами матрицы A
//     for (int i = 0; i < N; i++)
//         for (int j = 0; j < M; j++)
//             tmp [i * M + j] = A [i][j];

//     // нахождение и удаление повторяющихся элементов в массиве tmp
//     for (int i = 0; i < len; i++)
//         for (int j = i+1; j < len; j++) {
//             if (tmp [i] == tmp [j]) {
//                 for (int l = j; l < len - 1; l++)
//                     tmp [l] = tmp [l + 1]; 
//                 --len;
//             }
//             else j++;
//         }

//     k = len;

//     cout << "k = " << k << endl;
//     system ("pause");
//     return 0;
// }

/*
int main () {
    // int lenA = 10, lenB = 12;
    // double* A = {-6.4, 2.3, 4.5, -1.5, 10.6, -7.1, -5.4, 9.9, -3.3, 5.5};
    // double* A = new double [lenA];
    // double* B = new double [lenB];
    // A [0] = -6.4; A [1] = 2.3; A [2] = 4.5; A [3] = -1.5; A [4] = 10.6; A [5] = -7.1; A [6] = -5.4; A [7] = 9.9; A [8] = -3.3; A [9] = 5.5;
    // B [0] = 4.2; B [1] = -2.0; B [2] = 17.7; B [3] = 6.3; B [4] = 17.8; B [5] = 3.8; B [6] = 8.9; B [7] = 1.2; B [8] = -3.3; B [9] = 5.4; B [10] = 13.5; B [11] = -6.6;

    // func1_2 (*&A, lenA, *&B, lenB);

    // std::cout << RAND_MAX << std::endl;

    int N, M;
    std::cout << "Enter the size of matrix: "; std::cin >> N >> M;
    int* A [N]; for (auto &i : A) i = new int [M];
    func2_2 (A, N, M);
}
*/

// Самостоятельная работа (Стек)

struct stack {
    int data;
    stack* next;
} sp;
stack* add_stack (stack* sp, int data) {
    stack* spt = new stack;
    spt -> data = data;
    spt -> next = sp;
    return spt;
}
stack* read_stack_delete (stack* sp, int& data) {
    if (sp == NULL) return NULL;
    stack* spt = sp;
    data = sp -> data;
    sp = sp -> next;
    delete spt;
    return sp;
}
stack* delete_all_stack (stack* sp) {
    int data;
    stack* spt;
    while (sp) {
        spt = sp;
        data = sp -> data;
        cout << data << endl;
        sp = sp -> next;
        delete spt;
    }
    return NULL;
}
void exchange_stack_after (stack* sp) {
    stack* spt = sp -> next -> next;
    sp -> next -> next = spt -> next;
    spt -> next = sp -> next;
    sp -> next = spt;
}

/* ==================================== */

void create_stack () {
    stack _stack; srand(time(NULL));
    for (int i = 0; i < 50; i++) add_stack (&_stack, rand() % 100 - 50);
}

// void func_stack_1 () {
//     stack _stack1, _stack2;
// }