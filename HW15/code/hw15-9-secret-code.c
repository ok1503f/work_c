#include <stdio.h>
#include <stdlib.h>

void decode(char *str)
{
    while (*str)
    {
        if (*str >= 'A' && *str <= 'Z')
        {
            *str = (*str - 'A' + 6) % 26 + 'A';
        }
        str++;
    }
}

int main()
{
    FILE *file = fopen("../util/A15-9.TXT", "r");
    if (file == NULL)
    {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    char buffer[256];
    if (fgets(buffer, sizeof(buffer), file) != NULL)
    {
        decode(buffer);
        printf("Output: %s\n", buffer);
    }
    else
    {
        perror("Error reading file");
    }

    fclose(file);
    return EXIT_SUCCESS;
}