#include <stdio.h>

int main() {
    int n, k, c;
    scanf("%d %d", &n, &k);
    int sc[n];
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
        for(int i=0; i<k; i++) {
            if(sc[k-1-i] == 0) {
                c--;
            } else {
                break;
            }
        }
    }
    printf("%d", c);
    return 0;
}