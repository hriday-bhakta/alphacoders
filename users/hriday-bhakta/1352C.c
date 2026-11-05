#include <stdio.h>

long greatest(int n, int k){
    int t = (k/n)/n;
    long num = k + (k + (k/n))/n;

    while (t > 0){
        num++;
        if (num%n)
            t--;
    }

    return num;
}

int main() {
    int n, k, t;

    scanf("%d", &t);

    long ans[t];

    for (int i = 0; i < t; i++){
        scanf("%d %d", &n, &k);
        ans[i] = greatest(n, k);
    }

    for (int i = 0; i < t; i++)
        printf("%ld\n", ans[i]);

    return 0;
}