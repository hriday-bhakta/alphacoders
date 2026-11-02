#include <stdio.h>

int main()
{
    int n, sum = 0, count = 0;
    int n1, n2, n3;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &n1, &n2, &n3);
        sum = n1 + n2 + n3;
        if (sum >= 2)
            count++;
        sum = 0;
    }

    printf("%d", count);

    return 0;
}