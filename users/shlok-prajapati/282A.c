#include <stdio.h>

int main()
{
    int x=0,n;
    char op[4];

    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        scanf("%3s", op);

        if (op[1] == '+' ) x++;
        else x--;
    }

    printf("%d", x);
    return 0;
}
