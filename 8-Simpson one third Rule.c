#include <stdio.h>
#include <conio.h>
#include <math.h>

/* Define function here */
#define f(x) 4 * x - (3 * x * x)

int main()
{
    float lower, upper, integration, stepSize, k;
    int i, subInterval;

    /* Input */
    printf("Enter lower limit of integration: ");
    scanf("%f", &lower);
    printf("Enter upper limit of integration: ");
    scanf("%f", &upper);
    printf("Enter number of sub intervals: ");
    scanf("%d", &subInterval);

    /* Calculation */
    /* Finding step size */
    stepSize = (upper - lower) / subInterval;

    /* Finding Integration Value */
    integration = f(lower) + f(upper);
    for (i = 1; i < subInterval; i++)
    {
        k = lower + i * stepSize;
        if (i % 2 == 0)
        {
            integration = integration + 2 * f(k);
        }
        else
        {
            integration = integration + 4 * f(k);
        }
    }
    integration = integration * stepSize / 3;
    printf("\nRequired value of integration is: %.3f", integration);

    /* declare abs value */
    float abs_val = 1.00;

    /*  Absolute errors */
    float abs_err = abs_val - integration;
    printf("\nAbsolute errors is: %.3f", abs_err);

    /*  Relative errors */
    float rel_err = (abs_val - integration) / abs_val;
    printf("\nRelative errors is: %.3f", rel_err);
    return 0;
}
/*
Enter lower limit of integration: 0
Enter upper limit of integration: 1
Enter number of sub intervals: 10

Required value of integration is: 1.615
Absolute errors is: -0.615
Relative errors is: -0.615
*/