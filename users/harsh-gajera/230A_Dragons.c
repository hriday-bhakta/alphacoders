#include <stdio.h>

int main() {
    int s, n;
    scanf("%d %d", &s, &n);

    int x[n], y[n];

    for(int i=0; i<n; i++) {
        scanf("%d %d", &x[i], &y[i]);
    }
    int win;
    for(int i=0; i<n; i++) {
        int j, win=0;
        for(j=0; j<n-i; j++) {
            if(s > x[j]) {
                win = 1;
                break;
            }
        }
        if(win) {
            s += y[j];
            int temp = x[j];
            x[j] = x[n-1-i];
            x[n-1-i] = temp;
            temp = y[j];
            y[j] = y[n-1-i];
            y[n-1-i] = temp;
        } else {
            break;
        }
    }

    if(win) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}