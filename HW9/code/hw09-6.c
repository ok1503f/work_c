#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return (*(int *)b - *(int *)a);
}

int main()
{
    int n1, n2;
    printf("Enter element of Array1 :\n");
    scanf("%d", &n1);
    int array1[n1];
    for (int i = 0; i < n1; i++)
    {
        printf("--| Array1 [%d] : \n", i);
        scanf("%d", &array1[i]);
    }

    printf("Enter element of Array2 :\n");
    scanf("%d", &n2);
    int array2[n2];
    for (int i = 0; i < n2; i++)
    {
        printf("--| Array2 [%d] : \n", i);
        scanf("%d", &array2[i]);
    }

    int n3 = n1 + n2;
    int array3[n3];
    for (int i = 0; i < n1; i++)
    {
        array3[i] = array1[i];
    }
    for (int i = 0; i < n2; i++)
    {
        array3[n1 + i] = array2[i];
    }

    qsort(array3, n3, sizeof(int), compare);

    printf("Merge Array1 & Array2 to Array3\n");
    printf("Array3 = ");
    for (int i = 0; i < n3; i++)
    {
        printf("%d ", array3[i]);
    }
    printf("\n");

    return 0;
}