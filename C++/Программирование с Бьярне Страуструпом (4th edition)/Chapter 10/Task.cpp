#include "../std_lib_facilities.h"


// ввод и вывод файла
/*
int main () {
    cout << "Пожалуйста, введите имя файла: ";
    string name; cin >> name; // hello.txt

    // ifstream ist {name};    // ist - входной поток для файла name
    // if (!ist) error ("Невозможно открыть входной файл ", name);

    // ofstream ost {name};    // ost - выходной поток для файла name
    // if (!ost) error ("Невозможно открыть входной файл ", name);
}
*/

// 10.5
/*
struct Reading {
    int hour;
    double temperature;
};

int main () {
    cout << "Введите имя входного файла: ";
    string iname; cin >> iname; // output.txt
    ifstream ist {iname};   // ist читает данные в файл oname
    if (!ist) error ("Невозможно открыть входной файл ", iname);

    cout << "Введите имя выходного файла: ";
    string oname; cin >> oname; // input.txt
    ofstream ost {oname};   // ost записывает данные в файл oname
    if (!ost) error ("Невозможно открыть входной файл ", oname);

    vector <Reading> temps; // Хранилище данных
    int hour; double temperature;
    while (ist >> hour >> temperature) {
        if (hour < 0 || 23 < hour) error ("Некорректное время");
        temps.push_back (Reading {hour, temperature});
    }

    for (Reading i : temps) ost << '(' << i.hour << ", " << i.temperature << ")\n";
}
*/