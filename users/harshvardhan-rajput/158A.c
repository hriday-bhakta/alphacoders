#include <stdio.h>

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n];

    if((n >= k) && (1 <= k) && (n <= 50)){
        for(int i = 0; i <= n-1; i++){
            scanf("%d", &arr[i]);
        }

        if(arr[k-1] > 0){
            for(int i = n-1; i >= k-1; i--){
                if(arr[i] == arr[k-1]){
                    printf("%d", i+1);
                    break;
                }
            }
        }

        else if(arr[k-1] == 0){
            if (arr[0] == 0) printf("0");
            else {
                for(int i = k-2; i >= 0; i--){
                    if(arr[i] > 0){
                        printf("%d", i + 1);
                        break;
                    }
                }
            }
        }
    }
    return 0;
}