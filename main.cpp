#include "String.h"

int main() {
    String s1("Hello, world!");
    String s2 = s1;

    std::cout << "String s1: ";
    s1.display();

    std::cout << "String s2: ";
    s2.display();

    std::cout << "Character at index 7 in s1: " << s1[7] << std::endl;

    char searchChar = 'o';
    int index = s1(searchChar);
    if (index != -1) {
        std::cout << "Index of '" << searchChar << "' in s1: " << index << std::endl;
    }
    else {
        std::cout << "'" << searchChar << "' not found in s1." << std::endl;
    }

    std::cout << "Length of s1: " << static_cast<int>(s1) << std::endl;

    return 0;
}