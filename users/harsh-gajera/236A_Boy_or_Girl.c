#include <stdio.h>

int main() {
    char name[101];
    scanf("%s", name);

    int c=0, found;
    for(int i=0; name[i]!='\0'; i++) {
        found = 0;
        for(int j=0; j<i; j++) {
            if(name[i] == name[j]) {
                found = 1;
                break;
            }
        }
        if(!found) {
            c++;
        }
    }

    if(c%2) {
        printf("IGNORE HIM!");
    } else {
        printf("CHAT WITH HER!");
    }

    return 0;
}