#include <stdio.h>

void inputMatrix(int rows, int cols, int matrix[rows][cols], const char* name) {
    printf("Enter elements of %s (%dx%d):\n", name, rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int rows, int cols, int matrix[rows][cols], const char* name) {
    printf("%s:\n", name);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void multiplyMatrices(int r1, int c1, int matrix1[r1][c1], int r2, int c2, int matrix2[r2][c2], int result[r1][c2]) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

int main() {
    int r1, c1, r2, c2;

    printf("Enter rows and columns for Array1: ");
    scanf("%d %d", &r1, &c1);
    int array1[r1][c1];
    inputMatrix(r1, c1, array1, "Array1");

    printf("Enter rows and columns for Array2: ");
    scanf("%d %d", &r2, &c2);
    if (c1 != r2) {
        printf("Matrix multiplication not possible with given dimensions.\n");
        return 1;
    }
    int array2[r2][c2];
    inputMatrix(r2, c2, array2, "Array2");

    int result[r1][c2];
    multiplyMatrices(r1, c1, array1, r2, c2, array2, result);

    printMatrix(r1, c1, array1, "Array1");
    printMatrix(r2, c2, array2, "Array2");
    printMatrix(r1, c2, result, "Array1 x Array2");

    return 0;
}