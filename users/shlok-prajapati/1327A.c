#include <stdio.h>
int main()
{
    int t;
    long long n,k;
    scanf("%d", &t);
    int answer[t];

    for ( int i = 0; i < t; i++)
    {
        scanf("%lld %lld", &n, &k);

        if ( (n % 2 == k % 2) && n >= (k*k))
            answer[i] = 1;
        else
            answer[i] = 0;
    }

    for ( int i = 0; i < t; i++)
    {
        if ( answer[i] == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
