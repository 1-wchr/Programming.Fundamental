#include <stdio.h>
int main()
{
    int n[3];
    printf("Enter number: ");
    scanf("%d %d %d", &n[0], &n[1], &n[2]);

    int j;
    
    for (int i = 0; i < 3; i++)
    {
        if (i < 2 && n[i] > n[i+1])
        {
            j = n[i];
            n[i] = n[i +1];
            n[i + 1] = j;
            i = 1;
        }
        
    }
    printf("%d", n[0]+n[1]);
    
    return 0;
}