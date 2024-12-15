#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int N;
    printf("Input N :\n");
    scanf("%d", &N);

    int arr[N];
    printf("Input :\n");
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    qsort(arr, N, sizeof(int), compare);

    printf("Unique value : ");
    for (int i = 0; i < N; i++)
    {
        if ((i == 0 || arr[i] != arr[i - 1]) && (i == N - 1 || arr[i] != arr[i + 1]))
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}