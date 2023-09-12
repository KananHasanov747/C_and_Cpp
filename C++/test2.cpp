/*
#include <iostream>

using namespace std;

int main () {
    int N, M; // объявление двух переменных N, M

    cout << "Введите размер: ";
    cin >> N >> M;

    double matrix [N][M]; // объявление массива с размером N на M

    srand (time (NULL)); // метод srand () с ключом time (NULL)

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            matrix [i][j] = rand () % 18 * 1.1213425 - 14; // Заполнение массива рандомными элементами

    cout << "Исходный массив" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) cout << matrix [i][j] << "\t"; // выводит элементы массива в виде таблицы
        cout << endl;
    }

    // Алгоритм сортировки
    bool swapped = true; // логическая переменная swapped участвует как переключатель для оператора цикла while
    while (swapped) {
        swapped = false; // в случаи, если оператор условия if не выполнится (что значит, что массив отсортирован), то цикл завершится
        for (int i = 0; i < N - 1; i++) {
            if (matrix [i][0] > matrix [i + 1][0]) {
                for (int j = 0; j < M; j++) {
                    // метод swap
                    double tmp = matrix [i][j];
                    matrix [i][j] = matrix [i + 1][j];
                    matrix [i + 1][j] = tmp;
                }
                swapped = true;
            }
        }
    }

    cout << "Результирующий массив" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) cout << matrix [i][j] << "\t";
        cout << endl;
    }
}*/