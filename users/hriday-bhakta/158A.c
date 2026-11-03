#include <stdio.h>

int main() {
    int total, k, temp;
    scanf("%d %d", &total, &k);

    int scores[total], count = k;
    temp = total;
    for (int i = 0; i < total; i++) {
        scanf("%d", &scores[i]);
    }


    if ( scores[k-1] > 0 ){
        for (int i = 0; i < temp - k; i++){
            if (scores[k-1] == scores[k+i])
                count++;
        }
    }

    else {
        for (int i = 0; i < k; i++){
            if (scores[k-i-1] == 0)
                count--;
            else
                break;
        }
    }
    printf("%d", count);

    return 0;
}