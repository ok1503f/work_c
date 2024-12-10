#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[50];
    int birthYear;
    int birthMonth;
    int birthDay;
    int ageYears;
    int ageMonths;
} Person;

void calculateAge(Person *p, int currentYear, int currentMonth, int currentDay)
{
    p->ageYears = currentYear - p->birthYear;
    p->ageMonths = currentMonth - p->birthMonth;
    if (p->ageMonths < 0)
    {
        p->ageYears--;
        p->ageMonths += 12;
    }
    if (currentDay < p->birthDay)
    {
        p->ageMonths--;
        if (p->ageMonths < 0)
        {
            p->ageYears--;
            p->ageMonths += 12;
        }
    }
}

int main()
{
    FILE *file = fopen("../util/A15-7.TXT", "r");
    if (!file)
    {
        perror("Failed to open file");
        return 1;
    }

    Person people[100];
    int numPeople = 0;
    char line[100];

    // Skip the header line
    fgets(line, sizeof(line), file);

    while (fgets(line, sizeof(line), file))
    {
        sscanf(line, "%*d %s %d-%d-%d", people[numPeople].name, &people[numPeople].birthYear, &people[numPeople].birthMonth, &people[numPeople].birthDay);
        numPeople++;
    }

    fclose(file);

    int currentYear = 2018, currentMonth = 6, currentDay = 21;

    for (int i = 0; i < numPeople; i++)
    {
        calculateAge(&people[i], currentYear, currentMonth, currentDay);
    }

    Person *maxAgePerson = &people[0];
    Person *minAgePerson = &people[0];  

    for (int i = 0; i < numPeople; i++)
    {
        printf("%s %d Years, %d Months\n", people[i].name, people[i].ageYears, people[i].ageMonths);
        if (people[i].ageYears > maxAgePerson->ageYears ||
            (people[i].ageYears == maxAgePerson->ageYears && people[i].ageMonths > maxAgePerson->ageMonths))
        {
            maxAgePerson = &people[i];
        }
        if (people[i].ageYears < minAgePerson->ageYears ||
            (people[i].ageYears == minAgePerson->ageYears && people[i].ageMonths < minAgePerson->ageMonths))
        {
            minAgePerson = &people[i];
        }
    }

    printf("\nMax : %s (%d Years, %d Months)\n", maxAgePerson->name, maxAgePerson->ageYears, maxAgePerson->ageMonths);
    printf("Min : %s (%d Years, %d Months)\n", minAgePerson->name, minAgePerson->ageYears, minAgePerson->ageMonths);

    return 0;
}