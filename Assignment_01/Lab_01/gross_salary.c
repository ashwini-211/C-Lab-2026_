#include <stdio.h>

int main()
{
    float basicSalary, hra, da, grossSalary;

    printf("Enter basic salary, HRA, and DA: ");
    scanf("%f %f %f", &basicSalary, &hra, &da);

    grossSalary = basicSalary + hra + da;

    printf("Gross Salary = %.2f\n", grossSalary);

    return 0;
}
