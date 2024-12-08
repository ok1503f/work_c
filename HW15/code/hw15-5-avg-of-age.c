#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 100
#define MAX_PEOPLE 100

typedef struct
{
    char name[MAX_NAME_LENGTH];
    int age;
    double salary;
} Person;

void readData(const char *filename, Person people[], int *count)
{
    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    *count = 0;
    char line[256];
    fgets(line, sizeof(line), file); // Skip header line
    while (fgets(line, sizeof(line), file))
    {
        char name[MAX_NAME_LENGTH];
        int age;
        double salary;
        if (sscanf(line, "%s %d %lf", name, &age, &salary) == 3)
        {
            strcpy(people[*count].name, name);
            people[*count].age = age;
            people[*count].salary = salary;
            (*count)++;
        }
    }

    fclose(file);
}

double calculateAverageAge(Person people[], int count)
{
    int totalAge = 0;
    for (int i = 0; i < count; i++)
    {
        totalAge += people[i].age;
    }
    return (double)totalAge / count;
}

int compareByAge(const void *a, const void *b)
{
    return ((Person *)b)->age - ((Person *)a)->age;
}

void printAboveAverageAge(Person people[], int count, double averageAge)
{
    qsort(people, count, sizeof(Person), compareByAge);
    printf("People with age above average %.2f Years\n", averageAge);
    for (int i = 0; i < count; i++)
    {
        if (people[i].age > averageAge)
        {
            printf("Name: %s, Age: %d, Salary: %.2f Bath\n", people[i].name, people[i].age, people[i].salary);
        }
    }
}

int main()
{
    Person people[MAX_PEOPLE];
    int count;
    const char *filename = "../util/a15-5.TXT";

    readData(filename, people, &count);
    double averageAge = calculateAverageAge(people, count);
    printAboveAverageAge(people, count, averageAge);

    return 0;
}