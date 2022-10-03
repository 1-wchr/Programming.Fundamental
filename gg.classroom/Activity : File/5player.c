#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("record.txt", "w");
    struct player
    {
        char name[50];
        int level;
        int score;
    };

    struct player p[5];
    char name[50];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter name: ");
        scanf("%s", &name);
        strcpy(p[i].name, name);

        printf("Level: ");
        scanf("%d", &p[i].level);

        printf("Score: ");
        scanf("%d", &p[i].score);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("name : %s\t", p[i].name);
        printf("level : %d\t", p[i].level);
        printf("score : %d\n", p[i].score);
    }

    for (int i = 0; i < 5; i++)
    {
        fprintf(fp, "name : %s\t", p[i].name);
        fprintf(fp, "level : %d\t", p[i].level);
        fprintf(fp, "score : %d\n", p[i].score);
    }

    fclose(fp);

    return 0;
}
