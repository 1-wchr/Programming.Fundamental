#include <stdio.h>

int main()
{
    int n;
    double st = 0, nd;
    scanf("%d", &n);

    nd = n / 2;
    if (n >= 0)
    {
        while (nd != st)
        {
            st = nd;
            nd = (n / st + st) / 2;
        }
        if (nd == 0)
        {
            printf("1.000000");
        }
        else
        {
            printf("%lf", nd);
        }
    }
    else
    {
        printf("Error!!");
    }

    return 0;
}