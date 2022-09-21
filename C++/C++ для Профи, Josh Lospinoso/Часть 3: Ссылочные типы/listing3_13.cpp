struct ClockOfTheLongNow {

    ClockOfTheLongNow () {
        year = 2019;
    }

    void add_year () {
        year++;
    }

    bool set_year (int year) {
        if (year < 2019) return false;
        this -> year = year;
        return true;
    }

    int get_year () {
        return year;
    }

private:
    int year;
};