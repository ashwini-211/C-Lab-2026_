#include <stdio.h>

int main()
{
    int n, i, odd = 0, even = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        if(i % 2 == 0)
            even = even + i;
        else
            odd = odd + i;
    }

    printf("Sum of even numbers from 1 to %d = %d\n", n, even);
    printf("Sum of odd numbers from 1 to %d = %d\n", n, odd);

    return 0;
}

