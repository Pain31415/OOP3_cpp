#include "si.h"
#include <iostream>

int main() {
    StringIntersection str1("sdqcg");
    StringIntersection str2("rgfas34");

    StringIntersection intersection = str1 * str2;

    std::cout << "Intersection of strings: " << intersection.getString() << std::endl;

    return 0;
}