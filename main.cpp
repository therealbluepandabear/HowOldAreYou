
#include <iostream>

int FindDaysInMonth(int year, int month);
bool IsLeapYear(int year);
int DaysAlive(int year, int month, int day);

int main() {
    int year, month, day;

    std::cout << "Enter year of birth: " << std::endl;

    std::cin >> year;

    std::cout << "Enter month of birth: " << std::endl;

    std::cin >> month;

    std::cout << "Enter day of birth: " << std::endl;

    std::cin >> day;

    return 0;
}
int FindDaysInMonth(int year, int month) {
    if (month == 2) {
        bool isLeapYear = IsLeapYear(year);
    }
}
bool IsLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return true;
    } else return false;
}

int DaysAlive(int year, int month, int day) {

}
