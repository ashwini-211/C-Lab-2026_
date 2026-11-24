#include <stdio.h>

int main()
{
    int a[10], pos = 0, neg = 0, zero = 0;

    printf("Enter 10 integers:\n");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (a[i] > 0)
            pos++;
        else if (a[i] < 0)
            neg++;
        else
            zero++;
    }

    printf("Positive elements = %d\n", pos);
    printf("Negative elements = %d\n", neg);
    printf("Zero elements = %d\n", zero);

    return 0;
}

