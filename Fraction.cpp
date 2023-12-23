#include "Fraction.h"
#include <iostream>

Fraction::Fraction() : numerator(0), denominator(1) {}

Fraction::Fraction(int numerator, int denominator) : numerator(numerator), denominator(denominator) {
    simplify();  // ��������� ��� �� ��� ���������
}

Fraction Fraction::operator+(const Fraction& other) const {
    return Fraction(numerator * other.denominator + other.numerator * denominator, denominator * other.denominator);
}

Fraction Fraction::operator-(const Fraction& other) const {
    return Fraction(numerator * other.denominator - other.numerator * denominator, denominator * other.denominator);
}

Fraction Fraction::operator*(const Fraction& other) const {
    return Fraction(numerator * other.numerator, denominator * other.denominator);
}

Fraction Fraction::operator/(const Fraction& other) const {
    return Fraction(numerator * other.denominator, denominator * other.numerator);
}

void Fraction::display() const {
    std::cout << numerator << "/" << denominator;
}

void Fraction::simplify() {
    // ��������� ���������� ����� �� �����������
    // ���������, �������������� �������� ������
    // ��� ����������� ���������� �������� �������
}