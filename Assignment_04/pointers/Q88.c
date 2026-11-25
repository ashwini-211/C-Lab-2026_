#include <stdio.h>

int main()
{
    int a[5], b[5], i;
    int *p, *q;

    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    p = a;
    q = b;

    for(i = 0; i < 5; i++)
    {
        *(q+i) = *(p+i);
    }

    printf("Copied array is:\n");
    for(i = 0; i < 5; i++)
        printf("%d ", b[i]);

    return 0;
}