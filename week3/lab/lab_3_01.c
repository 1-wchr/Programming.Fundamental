#include <stdio.h>
int main()
{
    int num, t, sum1 = 0, rm1;

    printf("number: ");
    scanf("%d", &num);

    t = num;

    while (t >= 10)
    {
        while (t != 0)
        {
            rm1 = t % 10;
            sum1 = sum1 + rm1;
            t = t / 10;
        }
        printf("%d -> %d \n", num, sum1);
        t = sum1;
        sum1 = 0;
    }

    return 0;
}
