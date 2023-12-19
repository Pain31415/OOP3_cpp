#ifndef DATE_H
#define DATE_H

class Date {
private:
    int day, month, year;

public:
    Date(int d, int m, int y);

    int operator-(const Date& other) const;

    Date operator+(int daysToAdd) const;

    void display() const;
};

#endif // DATE_H