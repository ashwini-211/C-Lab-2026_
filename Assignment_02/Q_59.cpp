#include <stdio.h>

int main() {
    int n, i, target, count = 0;

    // 1. Read the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Ensure valid array size
    if (n <= 0) {
        printf("Array size must be greater than 0.\n");
        return 1;
    }

    int arr[n];

    // 2. Read array elements from the user
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 3. Read the element whose occurrence you want to find
    printf("Enter the element to count: ");
    scanf("%d", &target);

    // 4. Count the occurrences
    for (i = 0; i < n; i++) {
        if (arr[i] == target) {
            count++;
        }
    }

    // 5. Print the result
    printf("The element %d occurs %d time(s) in the array.\n", target, count);

    return 0;
}
