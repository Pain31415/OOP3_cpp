#include <iostream>
#include "Fraction.h"

int main() {
    Fraction a(1, 2);
    Fraction b(3, 4);

    Fraction sum = a + b;
    Fraction difference = a - b;
    Fraction product = a * b;
    Fraction quotient = a / b;

    std::cout << "Sum: ";
    sum.display();
    std::cout << std::endl;

    std::cout << "Difference: ";
    difference.display();
    std::cout << std::endl;

    std::cout << "Product: ";
    product.display();
    std::cout << std::endl;

    std::cout << "Quotient: ";
    quotient.display();
    std::cout << std::endl;

    return 0;
}