#include <stdio.h>
int main()
{
    int n1, n2, i, gcd;

    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);

    for (i = 1; i <= n1 && i <= n2; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
        }  
    }
    printf("Greatest common divisor = %d",gcd);

    return 0;
}