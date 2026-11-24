#include <stdio.h>

int main()
{
    int n,fact=1;

    printf("Enter a number: ");
    scanf("%d",&n);

    while(n>0)
    {
        fact=fact*n;
        n--;
    }

    printf("Factorial of entered number=%d",fact);

    return 0;
}

