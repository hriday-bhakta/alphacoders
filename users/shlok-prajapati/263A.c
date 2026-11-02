#include<stdio.h>
#include <stdlib.h>

int main()
{
    int A[5][5],x,y;

    for ( int i = 0; i < 5; i++)
        for ( int j = 0; j < 5; j++)
        {    scanf("%d", &A[i][j]);
            if ( A[i][j] == 1)
                {
                    x = i;
                    y = j;
                }
        }

    x = abs(x-2);
    y = abs(y-2);

    printf("%d", x + y);

    return 0;
}
