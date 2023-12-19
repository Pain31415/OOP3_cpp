#include <iostream>
#include "Complex.h"

int main() {
    Complex a(2.0, 3.0);
    Complex b(1.0, -2.0);

    Complex sum = a + b;
    Complex difference = a - b;
    Complex product = a * b;
    Complex quotient = a / b;

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