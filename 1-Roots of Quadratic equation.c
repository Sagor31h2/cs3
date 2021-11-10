#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//calculating the roots of equation
void calc_roots(int a, int b, int c)
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
        printf("%f\n%f", (double)(-b + sqrt_val) / (2 * a), (double)(-b - sqrt_val) / (2 * a));
    }
    else if (d == 0)
    {
        printf("Roots are real and same \n");
        printf("%f", -(double)b / (2 * a));
    }
    else
    {
        printf("Roots are complex \n");
        printf("%f + i%f\n%f - i%f", -(double)b / (2 * a), sqrt_val, -(double)b / (2 * a), sqrt_val);
    }
}
int main()
{
    int a = 2, b = -5, c = 8;
    calc_roots(a, b, c);
    return 0;
}

/*
Output
Roots are complex 
1.250000 + i6.244998
1.250000 - i6.244998
*/