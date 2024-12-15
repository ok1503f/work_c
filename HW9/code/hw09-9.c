#include <stdio.h>

int main() {
    int rows, cols;
    
    // Input dimensions for the arrays
    printf("Enter the number of rows and columns for the arrays: ");
    scanf("%d %d", &rows, &cols);
    
    int array1[rows][cols], array2[rows][cols], array3[rows][cols];
    
    // Input elements for array1
    printf("Enter elements for Array1:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &array1[i][j]);
        }
    }
    
    // Input elements for array2
    printf("Enter elements for Array2:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &array2[i][j]);
        }
    }
    
    // Calculate the sum of array1 and array2 into array3
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            array3[i][j] = array1[i][j] + array2[i][j];
        }
    }
    
    // Output the result
    printf("Array1 + Array2 = Array3\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", array3[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}