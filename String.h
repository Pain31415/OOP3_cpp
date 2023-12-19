#ifndef STRING_H
#define STRING_H

#include <iostream>

class String {
public:
    // Конструктор без параметрів
    String();

    // Конструктор із C-style рядком
    String(const char* str);

    // Конструктор копіювання
    String(const String& other);

    // Деструктор
    ~String();

    // Перевантаження оператора []
    char operator[](int index) const;

    // Перевантаження оператора ()
    int operator()(char ch) const;

    // Перетворення до int
    operator int() const;

    // Перевантаження оператора присвоєння
    String& operator=(const String& other);

    // Функція для отримання довжини рядка
    size_t length() const;

    // Функція для виведення рядка
    void display() const;

private:
    char* str;  // Вказівник на рядок
    size_t len; // Довжина рядка
};

#endif // STRING_H