#include <stdio.h>
int main()
{
    int n1, n2;
    printf("Number1: ");
    scanf("%d", &n1);
    printf("Number2: ");
    scanf("%d", &n2);

    printf("%d + %d = %d\n", n1, n2, n1 + n2);
    printf("%d - %d = %d\n", n1, n2, n1 - n2);
    printf("%d * %d = %d\n", n1, n2, n1 * n2);
    printf("%d / %d = %d\n", n1, n2, n1 / n2);

    return 0;
}
