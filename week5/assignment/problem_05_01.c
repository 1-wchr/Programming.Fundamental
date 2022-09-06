#include <stdio.h>
int main()
{
    int n1, n2;
    int gcd; 
    int lcm; 

    printf("Enter number: ");
    scanf("%d %d", &n1, &n2);

    for (int i = 1; i <= n1 && i <= n2; ++i) //gcd
    {

        if (n1 % i == 0 && n2 % i == 0)
            gcd = i;
    }

    printf("GCD is %d\n", gcd);

    for (int i = 1; i <= n1 && i <= n2; ++i) //lcm
    {

        if (n1 % i == 0 && n2 % i == 0)
            gcd = i;
    }

    lcm = (n1 * n2) / gcd;

    printf("LCM is %d ", lcm);

    return 0;
}