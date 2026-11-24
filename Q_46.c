#include <stdio.h>

int main()
{
    int n, i, num;
    int max, secondMax;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n < 2)
    {
        printf("Enter at least 2 numbers.");
        return 0;
    }

    printf("Enter number 1: ");
    scanf("%d", &max);

    printf("Enter number 2: ");
    scanf("%d", &num);

    if (num > max)
    {
        secondMax = max;
        max = num;
    }
    else
    {
        secondMax = num;
    }

    for (i = 3; i <= n; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num > max)
        {
            secondMax = max;
            max = num;
        }
        else if (num > secondMax)
        {
            secondMax = num;
        }
    }

    printf("Maximum = %d\n", max);
    printf("Second Maximum = %d\n", secondMax);

    return 0;
}
