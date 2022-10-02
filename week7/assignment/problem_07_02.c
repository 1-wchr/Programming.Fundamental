#include <stdio.h>

int mode(int a[], int n)
{
    int max = 0, maxCount = 0;
    for (int i = 0; i < n; ++i)
    {
        int num = 0;
        for (int j = 0; j < n; ++j)
        {
            if (a[j] == a[i])
                num++;
        }
        if (num > maxCount)
        {
            maxCount = num;
            max = a[i];
        }
    }
    return max;
}

int main()
{
    int n = 10;
    int a[] = {1, 2, 3, 3, 3, 4, 5, 8, 8, 9};
    printf("Mode = %d ", mode(a, n));
    return 0;
}