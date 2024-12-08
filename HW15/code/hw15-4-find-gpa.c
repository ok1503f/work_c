#include <stdio.h>
#include <string.h>

int main()
{
    char name[50], gender[10], maxName[50]; // Added maxName array
    int age;
    float gpa, maxGpa = 0;
    FILE *file = fopen("../util/a15-3.txt", "r");

    if (file == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }

    while (fscanf(file, "%s %d %f %s", name, &age, &gpa, gender) != EOF)
    {
        printf("Grade: %s %d %.2f %s\n", name, age, gpa, gender);
        if (gpa > maxGpa)
        {
            maxGpa = gpa;
            strcpy(maxName, name); // Store name when finding new maximum GPA
        }
    }

    printf("%s, Grade %.2f\n", maxName, maxGpa);
    fclose(file);
    return 0;
}