
#include <stdio.h>

int main()
{
    char str[100];
    int i, characters = 0, words = 1;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        characters++;

        if (str[i] == ' ')
            words++;
    }

    printf("Total characters = %d", characters);
    printf("\nTotal words = %d", words);

    return 0;
}
