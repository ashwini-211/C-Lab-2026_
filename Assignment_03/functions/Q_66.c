#include <stdio.h>

int fact(int n) {
    int i, f = 1;

    for (i = 1; i <= n; i++)
        f = f * i;

    return f;
}

int ncr(int n, int r) {
    return fact(n) / (fact(r) * fact(n - r));
}

int main() {
    int n, r;

    printf("Enter n and r: ");
    scanf("%d %d", &n, &r);

    if (n >= 0 && r >= 0 && r <= n)
        printf("nCr = %d", ncr(n, r));
    else
        printf("Invalid input");

    return 0;
}
