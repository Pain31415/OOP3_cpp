#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
private:
    double real;
    double imaginary;

public:
    Complex(double real, double imaginary);

    // Перевантаження операторів
    Complex operator+(const Complex& other) const;
    Complex operator-(const Complex& other) const;
    Complex operator*(const Complex& other) const;
    Complex operator/(const Complex& other) const;

    void display() const;
};

#endif // COMPLEX_H