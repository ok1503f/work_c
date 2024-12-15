#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int oldArray[] = {9, 2, 6, 1, 7};
    int oldSize = sizeof(oldArray) / sizeof(oldArray[0]);
    int newSize, i;

    printf("Enter new element of Array: ");
    scanf("%d", &newSize);

    int *newArray = (int *)malloc((oldSize + newSize) * sizeof(int));
    if (newArray == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (i = 0; i < oldSize; i++)
    {
        newArray[i] = oldArray[i];
    }

    for (i = 0; i < newSize; i++)
    {
        printf("Input: ");
        scanf("%d", &newArray[oldSize + i]);
    }

    qsort(newArray, oldSize + newSize, sizeof(int), compare);

    printf("Old Array: ");
    for (i = 0; i < oldSize; i++)
    {
        printf("%d ", oldArray[i]);
    }
    printf("\n");

    printf("New Array: ");
    for (i = 0; i < oldSize + newSize; i++)
    {
        printf("%d ", newArray[i]);
    }
    printf("\n");

    free(newArray);
    return 0;
}