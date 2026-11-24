#include <stdio.h>

int main()
{
    int a[10], odd = 0, even = 0;

    printf("Enter 10 integers:\n");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Total odd numbers = %d\n", odd);
    printf("Total even numbers = %d\n", even);

    return 0;
}

