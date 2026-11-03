#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    scanf("%99s", name);
    int len = strlen(name);
    int c = len;

    for (int i = 0; i < len - 1; i++)
    {
        for (int j = i+1; j < len; j++)
        {
            if (name[i] == name[j])
                c--;
        }
    }

    if (c % 2 == 0)
        printf("CHAT WITH HER!");
    else
        printf("IGNORE HIM!");

    return 0;
}