#include <stdio.h>
#include <math.h>

/*funtion returns a float*/

float fn(float x)
{
    return 3 * x - cos(x) - 1;
}

float find(float x)
{
    return 3 + sin(x);
}

int main()
{
    float x = 1;
    for (int i = 0; i < 20; i++)
    {

        x = x - (fn(x) / find(x));

        printf("Iter %d=%f\n", i + 1, x);
    }
    return 0;
}

/*
Output
iter 1=0.620016
iter 2=0.607121
iter 3=0.607102
iter 4=0.607102
iter 5=0.607102
iter 6=0.607102
iter 7=0.607102
iter 8=0.607102
iter 9=0.607102
iter 10=0.607102
iter 11=0.607102
iter 12=0.607102
iter 13=0.607102
iter 14=0.607102
iter 15=0.607102
iter 16=0.607102
iter 17=0.607102
iter 18=0.607102
iter 19=0.607102
iter 20=0.607102
*/