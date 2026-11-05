#include <stdio.h>

long greatest(int n, int k){
    long num = 0;

    while (k > 0){
        num++;
        if (num%n)
            k--;
    }

    return num;
}

int main() {
    int n, k, t;
    scanf("%d", &t);

    int ans[t];

    for (int i = 0; i < t; i++){
        scanf("%d %d", &n, &k);
        ans[i] = greatest(n, k);
        printf("%ld\n\n", ans[i]);
    }
}