#include <stdio.h>

int main(){
    int x = 0, n;
    scanf("%d", &n);
    if((n >= 1) && (n <= 150)){
        char arr[4];
        while(n--){
            scanf("%s", &arr);
            if(arr[1] == '+'){
                x++;
            }
            else if(arr[1] == '-'){
                x--;
            }
            else{
                printf("Invalid");
            }
        }
    }
    printf("%d", x);
    return 0;
}