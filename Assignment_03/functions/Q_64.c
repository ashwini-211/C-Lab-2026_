#include <stdio.h>

void fibonacci(int n) {
    int a = 0, b = 1, c, i;

    for (i = 1; i <= n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
}

int main() {
    printf("First 5 Fibonacci numbers:\n");
    fibonacci(5);

    printf("\nFirst 10 Fibonacci numbers:\n");
    fibonacci(10);

    printf("\nFirst 15 Fibonacci numbers:\n");
    fibonacci(15);

    return 0;
}
