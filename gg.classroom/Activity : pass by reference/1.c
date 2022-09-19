#include <stdio.h>

int a, b, c;
void swap(int *a, int *b)
{
    c = *b;
    *b = *a;
    *a = c;
}

int main()
{
    scanf_s("%d %d", &a, &b);
    swap(&a, &b);
    printf_s("%d %d", a, b);
    return 0;
}
