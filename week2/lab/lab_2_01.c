#include<stdio.h>
int main()
{
    int i =2;
    int num;
    
    printf("Enter number: ");
    scanf("%d",&num);
    while (num != 1)
    {
        while (num % i == 0)
        {
            printf("%d",i);
            num = num/i;
            if (num != 1)
            {
                printf(" x ");
            }    
        }
        i++;
    }
    return 0;
}