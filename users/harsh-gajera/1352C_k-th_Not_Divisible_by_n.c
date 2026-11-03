#include <stdio.h>

int main() {
    int t, n, k, c;
    scanf("%d", &t);
    int ans[t], j=0;
    for(int i=0; i<t; i++) {
        scanf("%d %d", &n, &k);
        c=1;
        while(1) {
            if(c%n) {
                k--;
            }
            if(!k) {
                ans[j] = c;
                j++;
                break;
            }
            c++;
        }
    }

    for(int i=0; i<t; i++) {
        printf("%d\n", ans[i]);
    }

    return 0;
}