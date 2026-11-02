#include <stdio.h>

int main() {
    int n, a, b, c, i=0;
    scanf("%d", &n);

    for(int j=1; j<=n; j++) {
        scanf("%d %d %d", &a, &b, &c);
        if(a+b+c >= 2) {
            i++;
        }
    }

    printf("%d", i);
    return 0;
}