#include <stdio.h>

int main()
{

    int cases, n, k;
    scanf("%d", &cases);
    long arr[cases];
    long c, i;
    for (int j = 0; j < cases; j++)
    {
        scanf("%d %d", &n, &k);
        c = 0;
        for (i = 0; c < k; i++)
        {
            if ((i+1) % n != 0){
                c++;
            }

        }

        arr[j] = i;
    }

    for (int j = 0; j < cases; j++)
    {
        printf("%ld ", arr[j]);
    }

    return 0;
}