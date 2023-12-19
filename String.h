#ifndef STRING_H
#define STRING_H

#include <iostream>

class String {
public:
    // ����������� ��� ���������
    String();

    // ����������� �� C-style ������
    String(const char* str);

    // ����������� ���������
    String(const String& other);

    // ����������
    ~String();

    // �������������� ��������� []
    char operator[](int index) const;

    // �������������� ��������� ()
    int operator()(char ch) const;

    // ������������ �� int
    operator int() const;

    // �������������� ��������� ���������
    String& operator=(const String& other);

    // ������� ��� ��������� ������� �����
    size_t length() const;

    // ������� ��� ��������� �����
    void display() const;

private:
    char* str;  // �������� �� �����
    size_t len; // ������� �����
};

#endif // STRING_H