#ifndef FRACTION_H
#define FRACTION_H

class Fraction {
public:
    Fraction();                 // ����������� �� �������������
    Fraction(int numerator, int denominator);  // ����������� � �����������

    // �������������� ������������ ���������
    Fraction operator+(const Fraction& other) const;
    Fraction operator-(const Fraction& other) const;
    Fraction operator*(const Fraction& other) const;
    Fraction operator/(const Fraction& other) const;

    // ��������� ����� �� �����
    void display() const;

private:
    int numerator;   // ˳�������
    int denominator; // ���������

    // ������� ��� ���������� �����
    void simplify();
};

#endif // FRACTION_H