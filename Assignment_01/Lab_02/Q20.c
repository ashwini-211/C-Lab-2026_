#include <stdio.h>

int main()
{
    float a, b;
    char ch;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");

    printf("\nEnter your choice: ");
    scanf(" %c", &ch);

    switch (ch)
    {
        case '1':
            printf("Result = %f", a + b);
            break;

        case '2':
            printf("Result = %f", a - b);
            break;

        case '3':
            printf("Result = %f", a * b);
            break;

        case '4':
            if (b != 0)
                printf("Result = %f", a / b);
            else
                printf("Division by zero is not possible.");
            break;

        default:
            printf("Invalid choice!");
    }

    return 0;
}

