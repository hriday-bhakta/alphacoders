//Theatre-Square-1A
#include <stdio.h>

int main(){
    int n, m, a, count, i = 1;
    scanf("%d %d %d", &n, &m, &a);
    if((n >= 1) && (m >= 1) && (a >= 1)){
        while(a*i < n){
            i++;
        }
        count = i; i = 1;
        while(a*i < m){
            i++;
        }
        count *= i;
        printf("%d", count);
    }
    return 0;
}