#include "../std_lib_facilities.h"

class Date {
public:
    class Invalid { };
    Date (int, int, int);
private:
    int y, m, d;
    bool is_valid ();
};

Date::Date (int yy, int mm, int dd) : y {yy}, m {mm}, d {dd} {
    if (!is_valid ()) throw Invalid {};
};

// bool Date::is_valid () { if (m < 1 || 12 < m) return false; }

// void f (int x, int y)
// try {
//     Date dxy {2009, x, y};
//     cout << dxy << '\n';
//     dxy.add_day (2);
// } catch (Date::Invalid) {
//     error ("неверная дата");
// }

int main () {
}