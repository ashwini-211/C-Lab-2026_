#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter a number whose multiplication table is to be printed: ");
    scanf("%d", &n);
    printf("The multiplication table of %d is\n",n);

    for(i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}

