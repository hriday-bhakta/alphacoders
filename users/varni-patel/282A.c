#include <stdio.h>

int main()
{
    int n, x = 0;
    scanf("%d", &n);

    char arr[4];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", arr);
        if (arr[1] == '+')
            ++x;
        else
            --x;
    }
    printf("%d", x);

    return 0;
}