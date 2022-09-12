#include <stdio.h>
int main()
{
    int n = 10;
    int i = 1;
    float average = 0;
    float studentHeight;

    printf("Number of Students is %d\n\n", n);

    printf("Enter Height(cm)\n");
    while (i <= n)
    {
        printf("Stdent(%d): ", i);
        scanf("%f", &studentHeight);
        average = average + studentHeight;
        i++;
    }

    average = average / n;

    printf("Average height is = %0.2f", average);

    return 0;
}