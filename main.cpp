
#include <iostream>
#include <chrono>

int FindDaysInMonth(int year, int month);
bool IsLeapYear(int year);
tm GetTm();
int FindCurrentYear();
int FindCurrentMonth();
int FindCurrentDay();
int DaysAlive(int year, int month, int day);

int main() {
    std::cout << DaysAlive(2005, 11, 7) << std::endl;

//    int year, month, day;
//
//    std::cout << "Enter year of birth: " << std::endl;
//
//    std::cin >> year;
//
//    std::cout << "Enter month of birth: " << std::endl;
//
//    std::cin >> month;
//
//    std::cout << "Enter day of birth: " << std::endl;
//
//    std::cin >> day;

    return 0;
}

int FindDaysInMonth(int year, int month) {
    if (month == 2) {
        if (IsLeapYear(year)) {
            return 29;
        } else return 28;
    } else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 ||month == 10 || month == 12) {
        return 31;
    } else return 30;
}

bool IsLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return true;
    } else return false;
}

tm GetTm() {
    std::chrono::system_clock::time_point now = std::chrono::system_clock::now();
    time_t astime_t = std::chrono::system_clock::to_time_t(now);
    tm astm = *localtime(&astime_t);

    return astm;
}

int FindCurrentYear() {
    return GetTm().tm_year + 1900;
}

int FindCurrentMonth() {
    int val = GetTm().tm_mon;
    return ++val;
}

int FindCurrentDay() {
    return GetTm().tm_mday;
}

// DOESN'T ACCOUNT FOR LEAP YEARS YET

int DaysAlive(int year, int month, int day) {
    int doffsetB = 0;
    int doffsetC = 0;

    int mOffsetB = 12 - month;

    for (int i = 0; i < mOffsetB + 1; i++) {
        doffsetB += FindDaysInMonth(year, month + i);
    }
    doffsetB -= day;

    int moffsetC = 12 - FindCurrentMonth();

    for (int i = 0; i < moffsetC + 1; i++) {
        doffsetC += FindDaysInMonth(FindCurrentYear(), FindCurrentMonth() + i);
    }
    doffsetC -= FindCurrentDay();

    int calc1 = (FindCurrentYear() - year) * 365;
    return (calc1 + (doffsetB)) - doffsetC;
}
