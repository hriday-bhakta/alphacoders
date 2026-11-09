#include <stdio.h>

int main()
{
    int t,n,k,c;
    scanf("%d", &t);

    for ( int i = 0; i < t; i++)
    {
        scanf("%d %d", &n, &k);
        c = 0;
        while(k != 0)
        {
            c++;
            if ( c % n != 0)
                k--;
        }
        printf("%d\n", c);
    }

    return 0;
}
