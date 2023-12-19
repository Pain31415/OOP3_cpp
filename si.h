#ifndef SI_H
#define SI_H

#include <string>

class StringIntersection {
private:
    std::string str;

public:
    StringIntersection(const std::string& s);

    StringIntersection operator*(const StringIntersection& other) const;

    std::string getString() const;
};

#endif // SI_H