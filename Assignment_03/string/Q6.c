
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], str3[200];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // 1. Length of string
    printf("\nLength of first string = %d", (int)strlen(str1));

    // 2. Copy string
    strcpy(str3, str1);
    printf("\nCopied string = %s", str3);

    // 3. Concatenate strings
    strcpy(str3, str1);
    strcat(str3, str2);
    printf("\nConcatenated string = %s", str3);

    // 4. Compare strings
    if (strcmp(str1, str2) == 0)
        printf("\nStrings are equal");
    else
        printf("\nStrings are not equal");

    // 5. Reverse string
    strcpy(str3, str1);
    strrev(str3);
    printf("\nReversed string = %s", str3);

    return 0;
}
