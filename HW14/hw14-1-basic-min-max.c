#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    int max = 0;
    int min = 100;
    int index[100];

    printf("Input N : ");
    scanf("%d", &n);

    printf("Index: ");
    for (int i = 0; i < n; i++)
    {
        printf("%2d ", i);
    }

    printf("\nArray: ");
    for (int i = 0; i < n; i++)
    {
        index[i] = rand() % 99 + 1;
        printf("%2d ", index[i]);
        if (index[i] > max)
        {
            max = index[i];
        }
        if (index[i] < min)
        {
            min = index[i];
        }
    }
    printf("\nMax: %d\n", max);
    printf("Min: %d\n", min);

    return 0;
}