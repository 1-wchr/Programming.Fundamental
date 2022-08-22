#include <stdio.h>
int main()
{
    int n = 0;
    for (int i = 1; i <= 10000; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            if (i % j == 0)
                n += j;
        }
        if (n == i)
        {
            printf("P(%d) = %d\n", n,n);
        }
        n = 0;
    }
    return 0;
}