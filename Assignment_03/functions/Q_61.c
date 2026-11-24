#include <stdio.h>

int isPalindrome(int num) {
    if (num < 0) {
        return 0;
    }

    int original = num;
    int reversed = 0;

    // Reverse the digits of the number
    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    // Check if the reversed number matches the original
    return (original == reversed);
}

int main() {
    int testNum1 = 121;
    int testNum2 = 123;

    if (isPalindrome(testNum1)) {
        printf("%d is a palindrome.\n", testNum1);
    } else {
        printf("%d is not a palindrome.\n", testNum1);
    }

    if (isPalindrome(testNum2)) {
        printf("%d is a palindrome.\n", testNum2);
    } else {
        printf("%d is not a palindrome.\n", testNum2);
    }

    return 0;
}
