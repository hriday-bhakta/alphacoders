#include <stdio.h>

long greatest(int n, int k){
    long low = 1, high = 2000000000;
    // using binary search to find the number where I can get k non-divisble by n
    while (low <= high){
        long mid = low + (high - low) / 2;
        long non_div = mid - (mid/n);
        //printf("%ld\n", non_div);

        if (non_div > k)
            high = mid - 1;
        else if (non_div < k)
            low = mid + 1;

        else
            if (mid%n)
                return mid;
            return mid - 1;
    }
}

int main() {
    int t;
    scanf("%d", &t);

    long ans[t];
    
    for (int i = 0; i < t; i++){
        int n, k;
        scanf("%d %d", &n, &k);

        ans[i] = greatest(n, k);
    }

    for (int i = 0; i < t; i++)
        printf("%ld\n", ans[i]);
    return 0;
}