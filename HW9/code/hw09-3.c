#include <stdio.h>

int main() {
    int Array1[100], Array2[100];
    int i = 0, value;

    // Input values into Array1
    printf("Input value to Array1 [%d]: ", i);
    while (scanf("%d", &value) && value != -1) {
        Array1[i] = value;
        i++;
        printf("Input value to Array1 [%d]: ", i);
    }

    // Initialize Array2 with zeros
    for (int j = 0; j < i; j++) {
        Array2[j] = 0;
    }

    // Display Array1
    printf("Array1 = ");
    for (int j = 0; j < i; j++) {
        printf("%d ", Array1[j]);
    }
    printf("\n");

    // Display Array2 before copying
    printf("Array2 = ");
    for (int j = 0; j < i; j++) {
        printf("%d ", Array2[j]);
    }
    printf("\n");

    // Copy data from Array1 to Array2
    printf("--| Copy Data from Array1 to Array2\n");
    for (int j = 0; j < i; j++) {
        Array2[j] = Array1[j];
    }

    // Display Array2 after copying
    printf("Array2 = ");
    for (int j = 0; j < i; j++) {
        printf("%d ", Array2[j]);
    }
    printf("\n");

    return 0;
}