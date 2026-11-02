#include <stdio.h>
int main()
{
    int n,c=0,p,q,r;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d",&p, &q, &r);
        if ( (p + q + r) > 1)
            c++;
    }
    printf("%d",c);

    return 0;
}
