#include "Date.h"
#include <iostream>

Date::Date(int d, int m, int y) : day(d), month(m), year(y) {}

int Date::operator-(const Date& other) const {
    int days = day - other.day;
    int months = (month - other.month) * 30;
    int years = (year - other.year) * 365;

    return days + months + years;
}

Date Date::operator+(int daysToAdd) const {
    Date result = *this;

    result.day += daysToAdd;

    while (result.day > 30) {
        result.day -= 30;
        result.month++;
    }

    while (result.month > 12) {
        result.month -= 12;
        result.year++;
    }

    return result;
}

void Date::display() const {
    std::cout << day << "." << month << "." << year << std::endl;
}