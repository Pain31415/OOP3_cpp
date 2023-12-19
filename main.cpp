#include "Date.h"
#include <iostream>

int main() {
    Date date1(10, 5, 2022);
    Date date2(15, 8, 2023);

    int diff = date2 - date1;
    std::cout << "Difference between dates: " << diff << " days" << std::endl;

    Date futureDate = date1 + 20;
    std::cout << "Date after adding 20 days: ";
    futureDate.display();

    return 0;
}