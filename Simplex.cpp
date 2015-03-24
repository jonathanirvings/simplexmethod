#include <stdio.h>
#include "Fraction.h"
#include "Tableau.h"

int main() {
    Fraction x(2,3);
    Fraction y(3,4);
    Fraction z = x + y;
    z.print();
}