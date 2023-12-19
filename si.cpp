#include "si.h"

StringIntersection::StringIntersection(const std::string& s) : str(s) {}

StringIntersection StringIntersection::operator*(const StringIntersection& other) const {
    std::string result;

    for (char ch : str) {
        if (other.str.find(ch) != std::string::npos && result.find(ch) == std::string::npos) {
            result += ch;
        }
    }

    return StringIntersection(result);
}

std::string StringIntersection::getString() const {
    return str;
}