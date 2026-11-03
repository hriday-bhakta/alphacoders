#include <stdio.h>
#include <string.h>

int main() {
    int n, c=1, found = 0;
    
    scanf("%d", &n);
    
    char name1[11], name2[11], input[11];
    scanf("%s", name1);
    
    for(int i=1; i<n; i++) {
        scanf("%s", input);
        if(!(strcmp(name1, input))) {
            c++;
        } else if(!found) {
            strcpy(name2, input);
            c--;
            found = 1;
        } else {
            c--;
        }
    }

    if(c>0) {
        printf("%s", name1);
    } else {
        printf("%s", name2);
    }

    return 0;
}