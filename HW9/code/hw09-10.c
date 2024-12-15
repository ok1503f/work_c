#include <stdio.h>

void transpose(int rows, int cols, int array[rows][cols], int transposed[cols][rows]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposed[j][i] = array[i][j];
        }
    }
}

void printArray(int rows, int cols, int array[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int array[rows][cols];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    int transposed[cols][rows];
    transpose(rows, cols, array, transposed);

    printf("Array:\n");
    printArray(rows, cols, array);

    printf("Array Transpose:\n");
    printArray(cols, rows, transposed);

    return 0;
}