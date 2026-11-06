#include <stdio.h>
#include <math.h>

int main() {
    int n, k, r, w, t;
    scanf("%d", &t);

    for(int i=0; i<t; i++) {
        scanf("%d %d", &n, &k);
        w = ceil((double)k/(n-1)) - 1;
        r = w*n + k - w*(n-1);
        printf("%d\n", r);
    }
    
    return 0;
}