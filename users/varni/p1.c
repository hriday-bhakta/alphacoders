#include <stdio.h>

int main()
{
    int n, sum = 0, count = 0;
    int n1, n2, n3;
    printf("Enter number between 1 and 1000: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter your opinions for question %d: ", i + 1);
        scanf("%d %d %d", &n1, &n2, &n3);
        sum = n1 + n2 + n3;
        if (sum >= 2)
            count++;
        sum = 0;
    }

    printf("The number questions they are going to attempt are %d", count);

    return 0;
}