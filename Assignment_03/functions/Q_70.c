#include <stdio.h>
#include <ctype.h> // Needed for tolower()

int isVowel(char c) {
    // Convert the character to lowercase to make checking easier
    c = tolower(c);

    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        return 1; // True, it's a vowel
    }
    
    return 0; // False, it's not a vowel
}

int main() {
    char ch;

    printf("Enter a character: ");
    // Notice the space before %c! It helps skip any leftover newlines in the input buffer.
    scanf(" %c", &ch);

    if (isVowel(ch)) {
        printf("'%c' is a vowel! \n", ch);
    } else {
        printf("'%c' is not a vowel.\n", ch);
    }

    return 0;
}
