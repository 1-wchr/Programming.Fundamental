#include <stdio.h>
int main()
{
    int x, y, z;
    printf("Enter number: ");
    scanf("%d %d %d", &x, &y, &z);

    if (x > y && x >= z)
    {
        printf("%d", z + y);
    }
    else if (y > x && y >= z)

    {
        printf("%d", z + x);
    }
    else
    {
        printf("%d", x + y);
    }

    return 0;
}
