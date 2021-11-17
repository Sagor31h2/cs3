#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//calculating the roots of equation
void calc_roots(double a, double b, double c)
{
    if (a == 0)
    {
        printf("Invalid Equation");
        return;
    }
    int d = b * b - 4 * a * c;
    double sqrt_val = sqrt(abs(d));
    if (d > 0)
    {
        printf("Roots are both real and different \n");
        printf("%f \n %f", (-b + sqrt_val) / (2 * a), (-b - sqrt_val) / (2 * a));
    }
    else if (d == 0)
    {
        printf("Roots are real and same \n");
        printf("%f", -b / (2 * a));
    }
    else
    {
        printf("Roots are complex \n");
        printf("%f + i%f\n%f - i%f", -b / (2 * a), sqrt_val, -b / (2 * a), sqrt_val);
    }
}
int main()
{
    double a = 4, b = 4, c = 1;
    calc_roots(a, b, c);
    return 0;
}

/*
Output
Roots are complex 
1.250000 + i6.244998
1.250000 - i6.244998
*/