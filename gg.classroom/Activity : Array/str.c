#include <stdio.h>
#include <string.h>

int main()
{
    char p, strings[50];

    printf("Enter Strings: ");
    scanf("%s",strings);

    int i = 0;
    p = strings[i];

    while (p != '\0')
    {
        if ((p >= 'A') && (p <= 'Z'))
        {
            printf("%c", p);
        }

        i++;
        p = strings[i];
    }

    return 0;
}
