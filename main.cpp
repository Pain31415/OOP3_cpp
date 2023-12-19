#include "Array.h"
#include <iostream>

int main() {
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    Array arr(size);

    std::cout << "Initial Array: " << static_cast<const char*>(arr) << std::endl;

    int increment;
    std::cout << "Enter the increment value: ";
    std::cin >> increment;
    arr(increment);

    std::cout << "After incrementing: " << static_cast<const char*>(arr) << std::endl;

    int index, value;
    std::cout << "Enter the index and value to assign: ";
    std::cin >> index >> value;
    arr[index] = value;

    std::cout << "After assigning value to index " << index << ": " << static_cast<const char*>(arr) << std::endl;

    int sum = static_cast<int>(arr);
    std::cout << "Sum of elements: " << sum << std::endl;

    return 0;
}