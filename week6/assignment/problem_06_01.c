#include <stdio.h>
int main()
{
    int studentHeight[9];
    int height_sum;
    float average;

    printf("Enter Height(cm)\n");
    for (int i = 1; i <= 10; i++)
    {
        printf("Student(%d) : ", i);
        scanf("%d", &studentHeight[i]);
    }

    for (int i = 1; i <= 10; i++)
    {
        height_sum = height_sum + studentHeight[i];
    }

    average = height_sum / 10.0;

    printf("Average height is %0.2f", average);

    return 0;
}
