#include <stdio.h>

int main()
{
    int n, j;
    scanf("%d", &n);

    if (n % 5 == 0)
        j = n / 5;
    else
        j = n / 5 + 1;

    printf("%d", j);

    return 0;
}