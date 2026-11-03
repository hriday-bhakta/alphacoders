#include <ctype.h>
#include <stdio.h>
#include <string.h>
int main()
{
    char usr[100];
    int c=0;
    scanf("%s", usr);
    int n = strlen(usr);

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
            if ( i != j)
                if ( usr[i] == usr[j] ) usr[j] = ' ';
    }

    for ( int i = 0; i < n; i++)
    {
        if (isalnum(usr[i])) c++;
    }

    if ( c % 2 == 0)
        printf("CHAT WITH HER!");
    else
        printf("IGNORE HIM!");
    return 0;
}
