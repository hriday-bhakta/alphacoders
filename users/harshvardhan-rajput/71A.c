#include <stdio.h>
#include <string.h>

int main(){
    char fl[2];
    char str[110];
    scanf("%s", str);
    if (strlen(str) > 10){
        fl[0] = str[0]; fl[1] = str[strlen(str) - 1];
        printf("%c%d%c\n", fl[0], strlen(str) - 2, fl[1]);
    }
    else{
        printf("%s\n", str);
    }
    return 0;
}