#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    int temp = t;
    int ans[t];

    for (int i = 0; i < t; i++){
        int n, k;
        scanf("%d %d", &n, &k);

        if (n >= (k*k) && n%2 == k%2)
            ans[i] = 1;
        else
            ans[i] = 0;
    }

    for (int i = 0; i < t; i++){
        if (ans[i])
            printf("YES\n");
        else
            printf("NO\n");
    }
}