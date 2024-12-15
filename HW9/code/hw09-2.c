#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

void sort_ascending(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void sort_descending(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[MAX_SIZE];
    int n = 0;
    int input;

    printf("Enter numbers (enter -1 to stop):\n");
    while (1)
    {
        scanf("%d", &input);
        if (input == -1)
        {
            break;
        }
        arr[n++] = input;
    }

    sort_ascending(arr, n);
    printf("0-99 : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    sort_descending(arr, n);
    printf("99-0 : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}