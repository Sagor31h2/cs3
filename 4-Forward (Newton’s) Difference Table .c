#include <stdio.h>
#include <conio.h>

int main()
{
    float x[20], y[20][20];
    int i, j, n;

    /* Input Section */
    printf("Enter number of data?\n");
    scanf("%d", &n);
    printf("Enter data:\n");
    for (i = 0; i < n; i++)
    {
        printf("x[%d]=", i);
        scanf("%f", &x[i]);
        printf("y[%d]=", i);
        scanf("%f", &y[i][0]);
    }

    /* Generating Forward Difference Table */
    for (i = 1; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            y[j][i] = y[j + 1][i - 1] - y[j][i - 1];
        }
    }

    /* Displaying Forward Difference Table */
    printf("\nFORWARD DIFFERENCE TABLE\n\n");
    for (i = 0; i < n; i++)
    {
        printf("%0.2f", x[i]);
        for (j = 0; j < n - i; j++)
        {
            printf("\t%0.2f", y[i][j]);
        }
        printf("\n");
    }

    getch(); /* Holding Screen */
    return 0;
}

/*
C Program Output: Forward Difference Table
Enter number of data?
5
Enter data:
x[0]=40
y[0]=31
x[1]=50
y[1]=73
x[2]=60
y[2]=124
x[3]=70
y[3]=159
x[4]=80
y[4]=190

FORWARD DIFFERENCE TABLE

40.00   31.00   42.00   9.00    -25.00  37.00
50.00   73.00   51.00   -16.00  12.00
60.00   124.00  35.00   -4.00
70.00   159.00  31.00
80.00   190.00
*/