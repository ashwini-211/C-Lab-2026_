#include <stdio.h>

int main() 
{
    int m1, m2, m3, m4, m5, total;
    float percentage;

    printf("Enter marks of 5 subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    percentage = (total / 500.0) * 100;

    printf("Total Marks = %d\n", total);
    printf("Percentage = %f\n", percentage);

    return 0;
}
