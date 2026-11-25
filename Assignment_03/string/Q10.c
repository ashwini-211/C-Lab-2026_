
#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[200];
    int i, lower = 0, upper = 0, digit = 0, special = 0;

    printf("Enter a text: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (islower(str[i]))
            lower++;

        else if (isupper(str[i]))
            upper++;

        else if (isdigit(str[i]))
            digit++;

        else if (!isspace(str[i]))
            special++;
    }

    printf("\nLowercase letters = %d", lower);
    printf("\nUppercase letters = %d", upper);
    printf("\nDigits = %d", digit);
    printf("\nSpecial symbols = %d", special);

    return 0;
}
