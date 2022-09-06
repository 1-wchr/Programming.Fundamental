#include <stdio.h>
int main()
{
    int n1, n2, gcd, lcm;

    int remainder;
    int nume; //ตัวเศษ
    int demo; //ตัวส่วน

    printf("Enter number: ");
    scanf("%d %d", &n1, &n2);

    if (n1 > n2)
    {
        nume = n1;
        demo = n2;
    }
    else
    {
        nume = n2;
        demo = n1;
    }

    while (remainder != 0)
    {
        nume = demo;
        demo - remainder;
        remainder = nume % demo;
    }

    gcd = demo;
    lcm = n1 * n2 / gcd;

    printf("GCD is %d\n", gcd);
    printf("LCM is %d ", lcm);
}