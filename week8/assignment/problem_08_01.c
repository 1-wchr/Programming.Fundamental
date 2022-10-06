#include <stdio.h>

double calNum(int n)
{
    int d = 0;
    while (n != 0)
    {
        n = n / 10;
        d++;
    }
    return d;
}

int main()
{
    int n;
    scanf("%d", &n);
    double st = calNum(n), nd = 0;

    nd = st * 100;
    if (n > 0)
    {
        while (st != nd)
        {
            st = 0.5 * (nd + (n / nd));
            nd = 0.5 * (st + (n / st));
        }
        printf("%lf", st);
    }
    else
    {
        printf("error");
    }

    return 0;
}
