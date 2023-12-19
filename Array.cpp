#include "Array.h"
#include <iostream>
#include <sstream>

Array::Array(int n) : size(n) {
    data = new int[size];
    for (int i = 0; i < size; ++i) {
        data[i] = 0;
    }
}

Array::~Array() {
    delete[] data;
}

int& Array::operator[](int index) {
    return data[index];
}

void Array::operator()(int increment) {
    for (int i = 0; i < size; ++i) {
        data[i] += increment;
    }
}

Array::operator int() const {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += data[i];
    }
    return sum;
}

Array::operator const char* () const {
    std::stringstream ss;
    ss << "[";
    for (int i = 0; i < size; ++i) {
        ss << data[i];
        if (i < size - 1) {
            ss << ", ";
        }
    }
    ss << "]";
    return ss.str().c_str();
}