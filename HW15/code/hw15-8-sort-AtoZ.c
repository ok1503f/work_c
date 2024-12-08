#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ITEMS 100
#define MAX_LENGTH 50

void sort(char arr[][MAX_LENGTH], int n, int ascending)
{
    char temp[MAX_LENGTH];
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((ascending && strcmp(arr[i], arr[j]) > 0) || (!ascending && strcmp(arr[i], arr[j]) < 0))
            {
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }
}

int main()
{
    FILE *file = fopen("../util/A15-8.TXT", "r");
    if (file == NULL)
    {
        printf("Could not open file A15-8.TXT\n");
        return 1;
    }

    char items[MAX_ITEMS][MAX_LENGTH];
    int count = 0;

    while (fgets(items[count], MAX_LENGTH, file) != NULL)
    {
        items[count][strcspn(items[count], "\n")] = '\0'; // Remove newline character
        count++;
    }
    fclose(file);

    printf("Normal (%d Item): ", count);
    for (int i = 0; i < count; i++)
    {
        printf("%s", items[i]);
        if (i < count - 1)
            printf(", ");
    }
    printf(".\n");

    sort(items, count, 1);
    printf("Sort (A to Z)  : ");
    for (int i = 0; i < count; i++)
    {
        printf("%s", items[i]);
        if (i < count - 1)
            printf(", ");
    }
    printf(".\n");

    sort(items, count, 0);
    printf("Sort (Z to A)  : ");
    for (int i = 0; i < count; i++)
    {
        printf("%s", items[i]);
        if (i < count - 1)
            printf(", ");
    }
    printf(".\n");

    return 0;
}