#include <stdio.h>

int findMax(int a[], int n) {
    int i, max = a[0];

    for (i = 1; i < n; i++) {
        if (a[i] > max)
            max = a[i];
    }

    return max;
}

int main() {
    int a[100], n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Maximum = %d", findMax(a, n));

    return 0;
}
