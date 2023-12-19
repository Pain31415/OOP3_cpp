#ifndef FRACTION_H
#define FRACTION_H

class Fraction {
public:
    Fraction();                 // Конструктор за замовчуванням
    Fraction(int numerator, int denominator);  // Конструктор з параметрами

    // Перевантаження арифметичних операторів
    Fraction operator+(const Fraction& other) const;
    Fraction operator-(const Fraction& other) const;
    Fraction operator*(const Fraction& other) const;
    Fraction operator/(const Fraction& other) const;

    // Виведення дробу на екран
    void display() const;

private:
    int numerator;   // Лічильник
    int denominator; // Знаменник

    // Функція для скорочення дробу
    void simplify();
};

#endif // FRACTION_H