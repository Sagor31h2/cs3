#include <stdio.h>
#include <math.h>

/*funtion returns a float*/

float fn(float x)
{
    return ((x * x * x) - (8 * x) - 4);
}

float find(float x)
{
    return ((3 * x * x) - 8);
}

int main()
{
    float x = 1;

    for (int i = 0; i < 10; i++)
    {

        x = x - (fn(x) / find(x));

        printf("Iter %d =%f\n", i + 1, x);
    }
    return 0;
}

/*
Output
Iter 1 =-1.200000
Iter 2 =-0.147826 
Iter 3 =-0.503317 
Iter 4 =-0.517263 
Iter 5 =-0.517304 
Iter 6 =-0.517304 
Iter 7 =-0.517304 
Iter 8 =-0.517304 
Iter 9 =-0.517304 
Iter 10 =-0.517304
*/