#include <stdio.h>

int main()
{
    long int t,n,k,c;
    scanf("%ld", &t);

    for ( int i = 0; i < t; i++)
    {
        scanf("%ld %ld", &n, &k);
        c = 0;
        while(k != 0)
        {
            c++;
            if ( c % n != 0)
                k--;
        }
        printf("%ld\n", c);
    }

    return 0;
}
