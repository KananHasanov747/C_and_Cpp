#include "../std_lib_facilities.h"

class Roman_int {
private:
    int tmp;
    string roman;

    int roman_int(char);
    char roman_int(int);

    void romanToIntPattern(int &base, int &snd,
                           char cbase, string ssnd, string sthrd) {
        tmp = base;
        if(tmp % 4) while(base--) roman += cbase;
        else if(!snd) roman += ssnd;
        else roman += sthrd, snd ? snd-- : 0;
    }

public:
    int romanToInt();
    string intToRoman();

    // Roman_int& operator+ (Roman_int&);
    // Roman_int& operator- (Roman_int&);

    string sval;
    int ival;
    Roman_int() : sval{""} {}
    Roman_int(int i) : ival{i} {}
    Roman_int(string s) : sval{s} {}
};

// Roman_int& Roman_int::operator+ (Roman_int& other) {
//     Roman_int *res;
//     res->ival = this->romanToInt() + other.romanToInt();
//     res->sval = res->intToRoman();
//     return *res;
// }
// Roman_int& Roman_int::operator- (Roman_int& other) {
//     Roman_int *res;
//     res->ival = this->romanToInt() - other.romanToInt();
//     res->sval = res->intToRoman();
//     return *res;
// }

Roman_int& operator+ (Roman_int base, Roman_int other) {
    Roman_int *res;
    (*res).ival = base.romanToInt() + other.romanToInt();
    (*res).sval = (*res).intToRoman();
    return *res;
};
Roman_int& operator- (Roman_int base, Roman_int other) {
    Roman_int *res;
    (*res).ival = base.romanToInt() - other.romanToInt();
    (*res).sval = (*res).intToRoman();
    return *res;
}
Roman_int& operator* (Roman_int base, Roman_int other) {
    Roman_int *res;
    (*res).ival = base.romanToInt() * other.romanToInt();
    (*res).sval = (*res).intToRoman();
    return *res;
}
Roman_int& operator/ (Roman_int base, Roman_int other) {
    Roman_int *res;
    (*res).ival = base.romanToInt() / other.romanToInt();
    (*res).sval = (*res).intToRoman();
    return *res;
}
Roman_int& operator% (Roman_int base, Roman_int other) {
    Roman_int *res;
    (*res).ival = base.romanToInt() % other.romanToInt();
    (*res).sval = (*res).intToRoman();
    return *res;
}
bool& operator==(Roman_int base, Roman_int other) {
    bool res = base.sval == other.sval;
    // return base.sval == other.sval;
}
// bool& operator!=(Roman_int base, Roman_int other) {
//     return base.sval != other.sval;
// }
// bool& operator<(Roman_int base, Roman_int other) {
//     return base.sval < other.sval;
// }
// bool& operator>(Roman_int base, Roman_int other) {
//     return base.sval > other.sval;
// }
// bool& operator<=(Roman_int base, Roman_int other) {
//     return base.sval <= other.sval;
// }
// bool& operator>=(Roman_int base, Roman_int other) {
//     return base.sval >= other.sval;
// }

istream& operator>>(istream& is, Roman_int& r_int) {
    string s;
    is >> s;
    if(!is) {
        if(is.eof()) return is;
        error("bad reading");
    }

    r_int.sval = s;
    return is;
}
ostream& operator<<(ostream& os, Roman_int& r_int) { return os << r_int.sval; }

int Roman_int::roman_int(char c) {
    switch(c) {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        default:
            error("illegal letter used ", c);
    }
}

int Roman_int::romanToInt() {
    vector<int> char_ints;

    for (char c : sval)
        char_ints.push_back(roman_int(c));

    int sum = 0,
        start = char_ints.size() - 1;
    
    for (int i = start; i >= 0; --i) {
        if (i == start) sum += char_ints[i];
        else
            char_ints[i] < char_ints[i + 1]
                ? sum -= char_ints[i]
                : sum += char_ints[i];
    }

    ival = sum;
    if(sval.empty()) sval = this->intToRoman();
    return sum;
}

char Roman_int::roman_int(int i) {
    switch(i) {
        case 1:
            return 'I';
        case 5:
            return 'V';
        case 10:
            return 'X';
        case 50:
            return 'L';
        case 100:
            return 'C';
        case 500:
            return 'D';
        case 1000:
            return 'M';
    }
}

string Roman_int::intToRoman() {
    int M = ival / 1000; ival -= M * 1000;
    int D = ival / 500;  ival -= D * 500;
    int C = ival / 100;  ival -= C * 100;
    int L = ival / 50;   ival -= L * 50;
    int X = ival / 10;   ival -= X * 10;
    int V = ival / 5;    ival -= V * 5;
    int I = ival;        ival -= 0;

    roman = "";
    if(I) romanToIntPattern(I, V, 'I', "VI", "XI");
    if(V) while(V--) roman += 'V';
    if(X) romanToIntPattern(X, L, 'X', "LX", "CX");
    if(L) while(L--) roman += 'L';
    if(C) romanToIntPattern(C, D, 'C', "DC", "MC");
    if(D) while(D--) roman += 'D';
    if(M) while(M--) roman += 'M';

    reverse(roman.begin(), roman.end());
    sval = roman;
    return sval;
}