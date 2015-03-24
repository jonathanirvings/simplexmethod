#ifndef FRACTION_H
#define FRACTION_H

#include <algorithm>
using namespace std;

class Fraction {
public:
    int num;
    int den;
    Fraction(int, int);
    void simplify(void);
    void print(void);
};

Fraction operator+(Fraction a, Fraction b);
Fraction operator*(Fraction a, Fraction b);

#endif