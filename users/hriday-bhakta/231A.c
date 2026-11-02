#include <stdio.h>
int main() {
    int no_of_problems;
    scanf("%d", &no_of_problems);

    int count = 0;

    while (no_of_problems--){
        int ref1, ref2, ref3;
        scanf("%d %d %d", &ref1, &ref2, &ref3);
        
        int sum = ref1 + ref2 + ref3;
        if (sum > 1) {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}