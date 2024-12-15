#include <stdio.h>

int main()
{
    int size;

    // Input cube size
    printf("Input cube size : \n");
    scanf("%d", &size);

    // Create and input matrix
    int matrix[size][size];
    printf("Input element :\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Input direction
    int direction;
    printf("Show zero (1=Left, -1=Right) : \n");
    scanf("%d", &direction);

    // Print original matrix
    printf("Matrix =\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Print modified matrix
    if (direction == 1)
    {
        printf("Left Matrix =\n");
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                if (i > j)
                {
                    printf("0 ");
                }
                else
                {
                    printf("%d ", matrix[i][j]);
                }
            }
            printf("\n");
        }
    }
    else if (direction == -1)
    {
        printf("Right Matrix =\n");
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                if (j > i)
                {
                    printf("0 ");
                }
                else
                {
                    printf("%d ", matrix[i][j]);
                }
            }
            printf("\n");
        }
    }

    return 0;
}