
#include <iostream>

int FindDaysInMonth(int year, int month);
bool IsLeapYear(int year);
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

int FindCurrentYear() {

}

int DaysAlive(int year, int month, int day) {
}
