
#include <iostream>
#include <chrono>

int FindDaysInMonth(int year, int month);
bool IsLeapYear(int year);
int DaysAlive(int year, int month, int day);
int FindCurrentYear();
int FindCurrentMonth();
int FindCurrentDay();
tm GetTm();

int main() {

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
    return GetTm().tm_mon;
}

int FindCurrentDay() {
    return GetTm().tm_mday;
}


int DaysAlive(int year, int month, int day) {

}
