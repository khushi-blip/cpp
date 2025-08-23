#include <stdio.h>

int main() {
    int rows, cols;
    int i, j;

    printf("enetr rows");
    scanf("%d", &rows);

    printf("Enter columns: ");
    scanf("%d", &cols);

    if (rows <= 0 || cols <= 0) {
        printf("Error: Number of rows and columns must be positive.\n");
        return 1;
    }

    int matrix[rows][cols];

    printf("\nEnter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter element at matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nThe matrix you entered is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}