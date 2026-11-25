
#include <stdio.h>

int main()
{
    char str[100], temp;
    int i, j, n = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[n] != '\0')
        n++;

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (str[i] > str[j])
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    printf("Sorted string = %s", str);

    return 0;
}
