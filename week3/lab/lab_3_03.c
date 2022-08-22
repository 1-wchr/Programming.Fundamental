#include <stdio.h>
void main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    int a = n - 1;
    int b = 1;

    for (int i = 1; i <= n; i++)
    {
        if (i == n)
        {
            for (int h = 1; h <= 2 * n - 1; h++)
            {
                printf("*");
            }
        }
        else if (i < n)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("*");
            }
            for (int g = 1; g <= 2 * a - 1; g++)
            {
                printf(" ");
            }
            for (int k = 1; k <= i; k++)
            {
                printf("*");
            }
        }
        a--;
        printf("\n");
    }

    for (int l = n - 1; l >= 0; l--)
    {
        for (int q = 1; q <= l; q++)
        {
            printf("*");
        }
        for (int w = 1; w <= 2 * b - 1; w++)
        {
            printf(" ");
        }
        for (int e = 1; e <= l; e++)
        {
            printf("*");
        }
        printf("\n");
        b++;
    }
}
