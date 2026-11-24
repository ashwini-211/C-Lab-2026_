#include <stdio.h>
#include <string.h> // Needed for strlen() and strcspn()

int main() {
    char text[100];

    printf("Enter a line of text: ");
    // Read a line of text (safely up to 100 characters)
    fgets(text, sizeof(text), stdin);

    // Remove the hidden "Enter" key (\n) that fgets captures at the end
    text[strcspn(text, "\n")] = '\0';

    // Find the length of the string using the built-in strlen function
    int length = strlen(text);

    printf("The length of your text is: %d characters\n", length);

    return 0;
}
