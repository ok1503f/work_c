#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
}

int main() {
    int n;
    printf("Enter new element of Array :\n");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Input :\n");
        scanf("%d", &arr[i]);
    }

    printf("Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    qsort(arr, n, sizeof(int), compare);

    if (n >= 3) {
        printf("The large 3rd element = %d\n", arr[2]);
    } else {
        printf("Array does not have enough elements.\n");
    }

    return 0;
}