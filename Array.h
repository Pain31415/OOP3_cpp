#ifndef ARRAY_H
#define ARRAY_H

class Array {
private:
    int* data;
    int size;

public:
    Array(int n);
    ~Array();

    int& operator[](int index);
    void operator()(int increment);

    operator int() const;
    operator const char* () const;
};

#endif // ARRAY_H