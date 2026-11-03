#include <stdio.h>

int main() {
    int n, k, c;
    scanf("%d %d", &n, &k);
    int sc[k];
    for(int i=0; i<n; i++) {
        scanf("%d", &sc[i]);
    }
    c = k;
    if(sc[k-1] > 0) {
        for(int i=0; i<n-k; i++) {
            if(sc[k+i] == sc[k-1]) {
                c++;
            }
        }
    } else {
        c=0;
    }
    printf("%d", c);
    return 0;
}