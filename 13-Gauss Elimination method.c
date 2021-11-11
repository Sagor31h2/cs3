#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

#define SIZE 10

int main()
{
    float a[SIZE][SIZE], x[SIZE], ratio;
    int i, j, k, n;

    /* Inputs */
    /* 1. Reading number of unknowns */
    printf("Enter number of unknowns: ");
    scanf("%d", &n);
    /* 2. Reading Augmented Matrix */
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n + 1; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%f", &a[i][j]);
        }
    }
    /* Applying Gauss Elimination */
    for (i = 1; i <= n - 1; i++)
    {
        if (a[i][i] == 0.0)
        {
            printf("Mathematical Error!");
            exit(0);
        }
        for (j = i + 1; j <= n; j++)
        {
            ratio = a[j][i] / a[i][i];

            for (k = 1; k <= n + 1; k++)
            {
                a[j][k] = a[j][k] - ratio * a[i][k];
            }
        }
    }
    /* Obtaining Solution by Back Subsitution */
    x[n] = a[n][n + 1] / a[n][n];

    for (i = n - 1; i >= 1; i--)
    {
        x[i] = a[i][n + 1];
        for (j = i + 1; j <= n; j++)
        {
            x[i] = x[i] - a[i][j] * x[j];
        }
        x[i] = x[i] / a[i][i];
    }
    /* Displaying Solution */
    printf("\nSolution:\n");
    for (i = 1; i <= n; i++)
    {
        printf("x[%d] = %0.3f\n", i, x[i]);
    }
    getch();
    return (0);
}
/*
Output: Gauss Elimination Method for Solving Systems of Linear Equations
Enter number of unknowns: 3
a[1][1] = 1
a[1][2] = 1
a[1][3] = 1
a[1][4] = 9
a[2][1] = 2
a[2][2] = -3
a[2][3] = 4
a[2][4] = 13
a[3][1] = 3
a[3][2] = 4
a[3][3] = 5
a[3][4] = 40

Solution:
x[1] = 1.000
x[2] = 3.000
x[3] = 5.000
*/