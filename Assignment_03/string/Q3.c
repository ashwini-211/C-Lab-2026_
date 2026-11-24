#include <stdio.h>

int main() {
    char a[100], b[50];
    int i, j;

    printf("Enter first string: ");
    scanf("%s", a);

    printf("Enter second string: ");
    scanf("%s", b);

    for (i = 0; a[i] != '\0'; i++);

    for (j = 0; b[j] != '\0'; j++) {
        a[i + j] = b[j];
    }

    a[i + j] = '\0';

    printf("Concatenated string: %s", a);

    return 0;
}
