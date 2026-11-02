#include <stdio.h>
#include <math.h>

int main() {
    int x;
    float a;
    scanf("%d", &x);
    a = (float) x/5;
    printf("%d", (int)ceil(a));
    return 0;
}