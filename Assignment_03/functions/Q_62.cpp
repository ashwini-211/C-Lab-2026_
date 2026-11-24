#include <stdio.h>

void armstrong(int n) {
    int temp = n, digit, sum = 0;

    while (temp > 0) {
        digit = temp % 10;
        sum = sum + digit * digit * digit;
        temp = temp / 10;
    }

    if (sum == n)
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    armstrong(n);

    return 0;
}
