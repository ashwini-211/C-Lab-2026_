#include <stdio.h>

int main() {
    int mat1[3][3], mat2[3][3], mult[3][3];
    int i, j, k;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            mult[i][j] = 0;
        }
    }

    printf("Enter elements of the first 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("\nEnter elements of the second 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 3; k++) {
                mult[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    // 4. Display the resulting matrix
    printf("\nResultant Matrix after Multiplication (Matrix 1 * Matrix 2):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d \t", mult[i][j]);
        }
        printf("\n");
    }

    return 0;
}
