#include <stdio.h>

int main() {
    int n, i, target, found = 0;

    // 1. Read size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; 

    // 2. Read array elements
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // 3. Read the element to search for
    printf("\nEnter the element you want to search: ");
    scanf("%d", &target);

    // 4. Perform Linear Search
    for (i = 0; i < n; i++) {
        if (arr[i] == target) {
            printf("\nElement %d found at index %d (Position %d).\n", target, i, i + 1);
            found = 1;
            break; 
        }
    }

    // 5. If element is not found after checking all elements
    if (!found) {
        printf("\nElement %d not found in the array.\n", target);
    }

    return 0;
}
