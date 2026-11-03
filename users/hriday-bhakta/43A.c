#include <stdio.h>
#include <string.h>

int main() {
    char team1[11], team2[11];
    int n, count = 1, taken = 0;

    scanf("%d", &n);
    scanf("%s", team1);
    
    n--;
    while (n--) {
        char input[11];
        scanf("%s", input);

        if (strcmp(input, team1) == 0) {
            //printf("Matched with 1\n");
            count++;
        }
            
        else {
            //printf("Matched with 2\n");
            if (!taken) {
                strcpy(team2, input);
                taken = 1;
            }
            count--;
        }
        //printf("%d",count);
    }

    (count > 0) ? printf("%s", team1) : printf("%s" ,team2); 

    return 0;
}