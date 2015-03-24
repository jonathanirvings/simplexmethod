#include "Fraction.h"

Fraction::Fraction(int _num, int _den) {
    num = _num;
    den = _den;
    simplify();
}

void Fraction::simplify(void) {
    if (den == 0) {
        num = 1;
    } else if (num == 0) {
        den = 1;
    } else {
        int gcd = __gcd(num,den);
        num /= gcd;
        den /= gcd;
    }
}

void Fraction::print(void) {
    printf("(%d/%d)",num,den);
}

Fraction operator+(Fraction a, Fraction b) {
    return Fraction(a.num * b.den + b.num * a.den, a.den * b.den);
}

Fraction operator-(Fraction a, Fraction b) {
    return Fraction(a.num * b.den - b.num * a.den, a.den * b.den);   
}

Fraction operator*(Fraction a, Fraction b) {
    return Fraction(a.num * b.num, a.den * b.den);
}

Fraction operator/(Fraction a, Fraction b) {
    return Fraction(a.num * b.den, a.den * b.num);
}

Fraction operator=(Fraction a) {
    return Fraction(a.num, a.den);
}

bool operator ==(Fraction a, Fraction b) {
    return (a.num * b.den == a.den * b.num)
}