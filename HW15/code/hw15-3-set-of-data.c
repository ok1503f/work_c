#include <stdio.h>

int main()
{
    char name[50], age[10], gpa[10], gender[10];

    FILE *file = fopen("../util/a15-3.txt", "r");
    if (file == NULL)
    {
        perror("Error opening file");
        return 1;
    }

    while (fscanf(file, "%s %s %s %s", name, age, gpa, gender) != EOF)
    {
        printf("%-6s %-5s %-6s %-5s\n", name, age, gpa, gender);
    }

    fclose(file);
    return 0;
}