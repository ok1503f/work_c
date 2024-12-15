#include <stdio.h>

int main()
{
    int N;
    printf("Input N :\n");
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++)
    {
        printf("Element[%d] :\n", i);
        scanf("%d", &arr[i]);
    }

    int count[100] = {0}; // Assuming the numbers are between 0 and 99

    for (int i = 0; i < N; i++)
    {
        count[arr[i]]++;
    }

    printf("Output:\n");
    for (int i = 0; i < 100; i++)
    {
        if (count[i] > 0)
        {
            printf("%d -> %d value%s.\n", i, count[i], count[i] > 1 ? "s" : "");
        }
    }

    return 0;
}