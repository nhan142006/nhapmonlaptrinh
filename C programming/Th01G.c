#include <stdio.h>
#include <stdlib.h>

void main () {
    int a = 1244;
    int b = -123;
    double base = 3.0, exponent = 4.0, result;
    result = pow(base, exponent);
    printf("Tri tuyet doi cua a = %lf\n", fabs(a));
    printf("Tri tuyet doi cua b = %lf\n", fabs(b));
    printf("%.llf^%.llf = %.llf\n", base, exponent, result);

}