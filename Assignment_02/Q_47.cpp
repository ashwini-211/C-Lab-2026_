#include <stdio.h>

int main()
{
    int a[100], n, i, max, secondMax;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 2 || n > 100)
    {
        printf("Enter n between 2 and 100.");
        return 0;
    }

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    if (a[0] > a[1])
    {
        max = a[0];
        secondMax = a[1];
    }
    else
    {
        max = a[1];
        secondMax = a[0];
    }

    for (i = 2; i < n; i++)
    {
        if (a[i] > max)
        {
            secondMax = max;
            max = a[i];
        }
        else if (a[i] > secondMax)
        {
            secondMax = a[i];
        }
    }

    printf("Maximum = %d\n", max);
    printf("Second Maximum = %d\n", secondMax);

    return 0;
}
