#include "String.h"
#include <cstring>

String::String() : str(nullptr), len(0) {}

String::String(const char* s) : str(nullptr), len(0) {
    if (s) {
        len = strlen(s);
        str = new char[len + 1];
        strcpy_s(str, len + 1, s);
    }
}

String::String(const String& other) : str(nullptr), len(0) {
    if (other.str) {
        len = other.len;
        str = new char[len + 1];
        strcpy_s(str, len + 1, other.str);
    }
}

String::~String() {
    delete[] str;
}

char String::operator[](int index) const {
    if (index >= 0 && static_cast<size_t>(index) < len) {
        return str[index];
    }
    else {
        std::cerr << "Index out of bounds!" << std::endl;
        return '\0'; // Return null character for out-of-bounds index
    }
}

int String::operator()(char ch) const {
    for (size_t i = 0; i < len; ++i) {
        if (str[i] == ch) {
            return static_cast<int>(i);
        }
    }
    return -1; // Return -1 if the character is not found
}

String::operator int() const {
    return static_cast<int>(len);
}

String& String::operator=(const String& other) {
    if (this != &other) {
        delete[] str;

        if (other.str) {
            len = other.len;
            str = new char[len + 1];
            strcpy_s(str, len + 1, other.str);
        }
        else {
            str = nullptr;
            len = 0;
        }
    }
    return *this;
}

size_t String::length() const {
    return len;
}

void String::display() const {
    std::cout << str << std::endl;
}