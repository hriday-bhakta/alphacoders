#include <stdio.h>
#include <string.h>

int main() {
    int n;
    int x = 0;
    scanf("%d", &n);

    while (n--){
        char input[4];
        scanf("%s", input);

        if (input[1] == '+'){
            x++;
        }

        else {
            x--;
        }
    }

    printf("%d", x);
}