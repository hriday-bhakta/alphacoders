#include <stdio.h>
#include <string.h>

int main()
{
    int n,c=0,k;
    scanf("%d", &n);

    char A[n][11];

    for ( int i = 0; i < n; i++)
    {
        scanf("%s", &A[i][0]);
    }



    for (int j = 0; j < n; j++)
    {
        if (strcmp(A[0], A[j])) c--;
        else c++;
    }


    for (int i = 0; i < n; i++)
    {
        if (strcmp(A[0], A[i])) {k = i; break;}
        else continue;
    }

    if ( c > 0 ) printf("%s", A[0]);
    else printf("%s", A[k]);
    return 0;
}
