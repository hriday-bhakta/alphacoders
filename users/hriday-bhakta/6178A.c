#include <stdio.h>
#include <math.h>

int main() {
    int elephant;
    scanf("%d", &elephant);

    int steps = (int)ceil(elephant / 5.0);  
    printf("%d", steps);

    return 0;
}