#include <stdio.h>

int main()
{
    int a[20] = {0}, b[20] = {0};
    int n, t, mode;
    int sum = 0, k = 0, c = 1, max = 0;
    float x = 0.0, y = 0.0;

    printf("limit: ");
    scanf("%d", &n);
    printf("Enter number: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        mode = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                mode++;
            }
        }
        if ((mode > max) && (mode != 0))
        {
            k = 0;
            max = mode;
            b[k] = a[i];
            k++;
        }
        else if (mode == max)
        {
            b[k] = a[i];
            k++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[i])
            c++;
    }
    if (c == n)
        printf("no mode");
    else
    {
        printf("Mode = ");
        for (int i = 0; i < k; i++)
            printf("%d ", b[i]);
    }
    printf("\n");
    return 0;
}
