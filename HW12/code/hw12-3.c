#include <stdio.h>
#include <string.h>

#define MAX_NAME 100

struct Employee {
    char name[MAX_NAME];
    double salary;
    int duration;
};

void printMoneyFormat(double amount) {
    // Handle negative numbers
    if (amount < 0) {
        printf("-");
        amount = -amount;
    }

    // Split into integer and decimal parts
    int integer = (int)amount;
    int decimal = (int)((amount - integer) * 100 + 0.5); // Round to 2 decimal places

    // Convert integer to string to process with commas
    char num_str[20];
    sprintf(num_str, "%d", integer);
    int len = strlen(num_str);

    // Print with commas
    for (int i = 0; i < len; i++) {
        printf("%c", num_str[i]);
        if ((len - i - 1) % 3 == 0 && i != len - 1) {
            printf(",");
        }
    }
    printf(".%02d", decimal);
}

int main() {
    struct Employee employees[100];
    int count = 0;
    char choice;
    int max_duration_index = 0;
    double total_salary = 0;

    do {
        printf("Do you want to Enter Employee Information? (y/n) : \n");
        scanf(" %c", &choice);
        
        if (choice == 'y' || choice == 'Y') {
            printf("----\n");
            printf("Employee Name : \n");
            scanf(" %[^\n]s", employees[count].name);
            
            printf("Salary (Bath/Month) : \n");
            scanf("%lf", &employees[count].salary);
            
            printf("Duration (Year) : \n");
            scanf("%d", &employees[count].duration);

            total_salary += employees[count].salary;

            if (employees[count].duration > employees[max_duration_index].duration) {
                max_duration_index = count;
            }
            
            count++;
        }
    } while (choice != 'n' && choice != 'N');

    if (count > 0) {
        double average_salary = total_salary / count;

        printf("Average of Salary : ");
        printMoneyFormat(average_salary);
        printf(" Bath\n");

        printf("Payment of every month : ");
        printMoneyFormat(total_salary);
        printf(" Bath\n");

        printf("----------------------------------------\n");
        printf("** Most duration in this business **\n");
        printf("Name : %s (%d Years)\n", 
               employees[max_duration_index].name, 
               employees[max_duration_index].duration);
        printf("Salary : ");
        printMoneyFormat(employees[max_duration_index].salary);
        printf(" Bath\n");
    }

    return 0;
}