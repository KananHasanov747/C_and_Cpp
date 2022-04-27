#include "../std_lib_facilities.h"

namespace Chrono {
    enum class Month {
        jan = 1, feb, mar, apr, may, jun,
        jul, aug, sep, oct, nov, dec
    };

class Date {
public:
    class Invalid { };              // Для генерации исключений
    Date (int y, Month m, int d);   // Провера корректности
                                    // и инициализация
    Date ();                        // Конструктор по умолчанию
    // Копирование по умолчанию нас устраивает

    // Немодифицирующие операции:
    int day () const { return d; }
    Month month () const { return m; }
    int year () const { return y; }

    // Модифицирующие операции:
    void add_day (int n);
    void add_month (int n);
    void add_year (int n);

private:
    int y;
    Month m;
    int d;
};

bool is_date (int y, Month m, int d);   // true для корректной даты
bool leapyear (int y);                  // true для високосного года
bool operator== (const Date& a, const Date& b);
bool operator!= (const Date&, const Date& b);
ostream& operator<< (ostream& os, const Date& d);
istream& operator>> (istream& is, Date& dd);

}   // Chrono