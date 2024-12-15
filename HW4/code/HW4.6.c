#include <stdio.h>

int main() {
    char employeeID[11]; 
    int workingHrs;
    float salaryPerHour, totalSalary;

    printf("Input the Employees ID (Max. 10 chars): \n");
    scanf("%10s", employeeID); 

    printf("Input the working hrs: \n");
    scanf("%d", &workingHrs);

    printf("Salary amount/hr: \n");
    scanf("%f", &salaryPerHour);

    totalSalary = workingHrs * salaryPerHour;

    printf("Employees ID = %s\n", employeeID);
    printf("Salary = U$ %.2f\n", totalSalary);

    return 0;
}
