#include <stdio.h>
#include <string.h>

int main()
{
    int n, c = 1;
    int is_taken = 1;
    char a1[10], a2[10], a3[10];
    scanf("%d", &n);
    scanf("%s", a1);

    for (int i = 0; i < n - 1; i++)
    {
        scanf("%s", a3);
        if (strcmp(a1, a3) != 0)
        {
            if (is_taken)
            {
                strcpy(a2, a3);
                is_taken--;
            }

            c--;
        }
        else
            c++;
    }
    if (c > 0)
        printf("%s", a1);
    else
        printf("%s", a2);
    return 0;
}