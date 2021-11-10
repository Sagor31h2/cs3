#include <conio.h>
#include <stdio.h>
#define f(x, y) (y - x) / (y + x)
void main()
{
    float x, y, h, xn, l;

    printf("Program for Solution of Ordinary Differential Equation\nEuler's Method\n");
    printf("Enter value for x and y\n");
    scanf("%f%f", &x, &y);
    printf("Enter value for h and last of x\n");
    scanf("%f%f", &h, &xn);
    while (x + h <= xn)
    {
        l = h * f(x, y);
        y = y + l;
        x = x + h;

        printf("y = %f\tx = %f\n", y, x);
    }

    return 0;
}

/*
Program for Solution of Ordinary Differential Equation
Euler's Method
Enter value for x and y
0.02
0.1
Enter value for h and last of x
0.02
0.1
y = 0.113333    x = 0.040000
y = 0.122899    x = 0.060000
y = 0.129777    x = 0.080000
y = 0.134522    x = 0.100000
*/