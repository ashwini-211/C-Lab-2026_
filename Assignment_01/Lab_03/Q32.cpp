#include <stdio.h>

int main()
{
    int n, i, x, max, smax;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter number 1: ");
    scanf("%d", &max);

    printf("Enter number 2: ");
    scanf("%d", &smax);

    if(smax > max)
    {
        x = max;
        max = smax;
        smax = x;
    }

    for(i = 3; i <= n; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &x);

        if(x > max)
        {
            smax = max;
            max = x;
        }
        else if(x > smax)
        {
            smax = x;
        }
    }

    printf("Maximum = %d\n", max);
    printf("Second Maximum = %d\n", smax);

    return 0;
}

