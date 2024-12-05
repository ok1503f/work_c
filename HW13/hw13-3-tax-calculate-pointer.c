#include <stdio.h>

void calculateTax(int *salary, float *tax, float *allSalary, int *i)
{
    *tax += salary[*i] * 0.07;
    *allSalary += salary[*i];
    printf("salary %d\n", salary[*i]);
    printf("allSalary: %.2f\n", *allSalary);
}

void printTax(float *tax, float *allSalary, float *maxTaxPerson)
{
    printf("All salary per month: %.2f\n", *allSalary);
    printf("All salary per year: %.2f\n", *allSalary * 12);
    printf("Tax (7 per year): %.2f\n", *tax * 12);
    printf("Tax (7 per month): %.2f\n", *tax);
    printf("Max tax person: %.2f\n", *maxTaxPerson * 12);
}

int main()
{
    char name[20][20];
    int salary[20];
    int i = 0;
    float tax = 0;
    float allSalary = 0;
    float maxTaxPerson = 0;

    while (1)
    {
        printf("Employee %d's Name: ", i + 1);
        scanf("%s", name[i]);

        if (strcmp(name[i], "-1") == 0)
            break;

        printf("Sarary (Bath/Month) :");
        scanf("%d", &salary[i]);
        if (salary[i] > maxTaxPerson)
        {
            maxTaxPerson = salary[i] * 0.07;
        }

        calculateTax(&salary, &tax, &allSalary, &i);

        i++;
    }

    printTax(&tax, &allSalary, &maxTaxPerson);
}