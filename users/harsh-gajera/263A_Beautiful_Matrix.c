#include <stdio.h>
#include <stdlib.h>

int main() {
    int mat[5][5], x, y;

    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
            scanf("%d", &mat[i][j]);
            if(mat[i][j] == 1) {
                x = i;
                y = j;
            }
        }
    }

    printf("%d", abs(x-2) + (y-2));
    return 0;
}