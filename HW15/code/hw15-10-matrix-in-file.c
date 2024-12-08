#include <stdio.h>
#include <stdlib.h>

#define ROWS_A 2
#define COLS_A 3
#define ROWS_B 3
#define COLS_B 2

void readMatrixA(int matrix[ROWS_A][COLS_A], const char *filename)
{
    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }
    char buffer[256];
    fgets(buffer, sizeof(buffer), file); // Skip header
    for (int i = 0; i < ROWS_A; i++)
    {
        fscanf(file, "%*s %d %d %d", &matrix[i][0], &matrix[i][1], &matrix[i][2]);
    }
    fclose(file);
}

void readMatrixB(int matrix[ROWS_B][COLS_B], const char *filename)
{
    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }
    char buffer[256];
    fgets(buffer, sizeof(buffer), file); // Skip header
    for (int i = 0; i < ROWS_B; i++)
    {
        fscanf(file, "%*s %d %d", &matrix[i][0], &matrix[i][1]);
    }
    fclose(file);
}

void multiplyMatrices(int result[ROWS_A][COLS_B], int matrixA[ROWS_A][COLS_A], int matrixB[ROWS_B][COLS_B])
{
    for (int i = 0; i < ROWS_A; i++)
    {
        for (int j = 0; j < COLS_B; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < COLS_A; k++)
            {
                result[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }
}

void printMatrixA(int matrix[ROWS_A][COLS_A])
{
    printf("Matrix A from file1 =\n");
    for (int i = 0; i < ROWS_A; i++)
    {
        for (int j = 0; j < COLS_A; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void printMatrixB(int matrix[ROWS_B][COLS_B])
{
    printf("Matrix B from file2 =\n");
    for (int i = 0; i < ROWS_B; i++)
    {
        for (int j = 0; j < COLS_B; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void printResultMatrix(int matrix[ROWS_A][COLS_B])
{
    printf("Result of A x B =\n");
    for (int i = 0; i < ROWS_A; i++)
    {
        for (int j = 0; j < COLS_B; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int matrixA[ROWS_A][COLS_A];
    int matrixB[ROWS_B][COLS_B];
    int result[ROWS_A][COLS_B];

    readMatrixA(matrixA, "../util/A15-10.TXT");
    readMatrixB(matrixB, "../util/B15-10.TXT");

    printMatrixA(matrixA);
    printMatrixB(matrixB);

    multiplyMatrices(result, matrixA, matrixB);

    printResultMatrix(result);

    return 0;
}