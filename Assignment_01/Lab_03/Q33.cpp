#include <stdio.h>
int main()
{
    int n, i, x, max, min;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter number 1: ");
    scanf("%d", &max);

    min = max;

    for(i = 2; i <= n; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &x);

        if(x > max)
            max = x;

        if(x < min)
            min = x;
    }

    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);

    return 0;
}

