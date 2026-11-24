#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    float total, percentage;

    printf("Enter marks of 5 subjects:\n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    total = a + b + c + d + e;
    percentage = total / 5;

    printf("Total marks = %f\n", total);
    printf("Percentage = %f\n", percentage);

    if (percentage >= 60)
        printf("First Division");
    else if (percentage >= 50)
        printf("Second Division");
    else if (percentage >= 40)
        printf("Third Division");
    else
        printf("Fail");

    return 0;
}

