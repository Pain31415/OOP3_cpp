#include "Complex.h"
#include <iostream>

Complex::Complex(double real, double imaginary) : real(real), imaginary(imaginary) {}

Complex Complex::operator+(const Complex& other) const {
    return Complex(real + other.real, imaginary + other.imaginary);
}

Complex Complex::operator-(const Complex& other) const {
    return Complex(real - other.real, imaginary - other.imaginary);
}

Complex Complex::operator*(const Complex& other) const {
    return Complex(
        real * other.real - imaginary * other.imaginary,
        real * other.imaginary + imaginary * other.real
    );
}

Complex Complex::operator/(const Complex& other) const {
    double denominator = other.real * other.real + other.imaginary * other.imaginary;
    return Complex(
        (real * other.real + imaginary * other.imaginary) / denominator,
        (imaginary * other.real - real * other.imaginary) / denominator
    );
}

void Complex::display() const {
    std::cout << real << " + " << imaginary << "i";
}