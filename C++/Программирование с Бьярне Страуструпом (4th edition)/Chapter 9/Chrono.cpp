#include "Chrono.h"

namespace Chrono {
// Определения функций-членов:
Date::Date (int yy, Month mm, int dd)
    : y {yy}, m {mm}, d {dd} {
    if (!is_date (yy, mm, dd)) throw Invalid {};
}

const Date& default_date () {
    static Date dd {2002, Month::jan, 1};   // Начало XXI века
    return dd;
}

Date::Date () 
    :y {default_date ().year ()},
     m {default_date ().month ()},
     d {default_date ().day ()} {}

void Date::add_day (int) {

}

void Date::add_month (int n) {

}

void Date::add_year (int n) {
    if (m == Month::feb && d == 29 && !leapyear (y + n)) {  // В невисокосный год
        m = Month::mar;                                     // 29 февраля преващается в 1 марта
        d = 1;
    }
    y += n;
}

bool is_date (int y, Month m, int d) {
    // Полагаем y корректным
    if (d <= 0) return false;   // d должно быть положительным
    if (m < Month::jan || Month::dec < m) return false;

    int days_in_month = 31;     // В месяце не более 31 дня
    switch (m) {
        case Month::feb:        // Длина февраля бывает разной
            days_in_month = (leapyear (y)) ? 29 : 28;
            break;
        case Month::apr: case Month::jun:
        case Month::sep: case Month::nov:
            days_in_month = 30; // В этих месяцах 30 дней
            break;
    }
    if (days_in_month < d) return false;
    return true;
}

bool leapyear (int y) {
    if (fmod (y, 4) == 0) return true;
    return false;
}

bool operator== (const Date& a, const Date& b) {
    return a.year ()  == b.year ()
        && a.month () == b.month ()
        && a.day ()   == b.day ();
}

bool operator!= (const Date& a, const Date& b) { return !(a == b); }

ostream& operator<< (ostream& os, const Date& d) {
    return os << '(' << d.year ()
              << ',' << int (d.month ())
              << ',' << d.day () << ')';
}

istream& opeator>> (istream& is, Date& dd) {
    int y, m, d;
    char ch1, ch2, ch3, ch4;
    is >> ch1 >> y >> ch2 >> m >> ch >> d >> ch4;
    if (!is) return is;
    if (ch1 != '(' || ch2 != ',' ||
        ch3 != ',' || ch4 != ')') {     // Ошибка формата
        is.clear (ios_base::failbit);   // Устанавливаем бит ошибки
    }
    dd = Date (y, Month (m), d);        // Обновляем dd
    return is;
}

/*
enum class Day {
    sunday, monday, tuesday, wednesday,
    thursday, friday, saturday
};

Day day_of_week (const Date& d) {

}

Day next_Sunday (const Date& d) {

}

Day next_weekday (const Date& d) {

}
*/
}   // Chrono