#include <stdio.h>

int main() {
    int n, k, r, t;
    scanf("%d", &t);

    for(int i=0; i<t; i++) {
        scanf("%d %d", &n, &k);
        r = k + (k-1)/(n-1);
        printf("%d\n", r);
    }
    
    return 0;
}