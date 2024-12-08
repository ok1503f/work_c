#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 100
#define MAX_NAME_LENGTH 50
#define MAX_JOB_LENGTH 50

typedef struct
{
    char name[MAX_NAME_LENGTH];
    int age;
    double salary;
    char job[MAX_JOB_LENGTH];
} Employee;

void find_highest_salary(Employee employees[], int count, const char *job, char *result)
{
    double max_salary = 0;
    int max_index = -1;
    for (int i = 0; i < count; i++)
    {
        if (strcmp(employees[i].job, job) == 0 && employees[i].salary > max_salary)
        {
            max_salary = employees[i].salary;
            max_index = i;
        }
    }
    if (max_index != -1)
    {
        sprintf(result, "%s: %s(%d yrs) %.2f Bath", job, employees[max_index].name, employees[max_index].age, employees[max_index].salary);
    }
}

double calculate_average_salary(Employee employees[], int count)
{
    double total_salary = 0;
    for (int i = 0; i < count; i++)
    {
        total_salary += employees[i].salary;
    }
    return total_salary / count;
}

int main()
{
    FILE *file = fopen("../util/A15-6.TXT", "r");
    if (!file)
    {
        perror("Unable to open file");
        return 1;
    }

    Employee employees[100];
    int count = 0;
    char line[MAX_LINE_LENGTH];

    // Skip the header line
    fgets(line, sizeof(line), file);

    while (fgets(line, sizeof(line), file))
    {
        sscanf(line, "%s %d %lf %s", employees[count].name, &employees[count].age, &employees[count].salary, employees[count].job);
        count++;
    }
    fclose(file);

    char result[MAX_LINE_LENGTH];
    find_highest_salary(employees, count, "Programmer", result);
    printf("%s\n", result);
    find_highest_salary(employees, count, "Support", result);
    printf("%s\n", result);

    double average_salary = calculate_average_salary(employees, count);
    printf("Average Salary: %.2f Bath\n", average_salary);

    return 0;
}