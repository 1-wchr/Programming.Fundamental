#include <stdio.h>
int main()
{
    int i = 999;
    int sum = 0;

    while (i > 0)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum = sum + i;
        }
        i--;
    }

    printf("%d", sum);

    return 0;
}