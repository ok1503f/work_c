#include <stdio.h>
#include <string.h>

#define MAX_NAME 50
#define MAX_EMPLOYEES 100
#define MULTIPLIER_LEVELS 6

typedef struct {
    char name[MAX_NAME];
    int exp;
    double multiplier;
} Employee;

// Helper function to determine multiplier and index based on experience
static inline void get_multiplier(int exp, double *multiplier, int *index) {
    if (exp < 1000) { *multiplier = 1.0; *index = 0; }
    else if (exp < 2000) { *multiplier = 1.2; *index = 1; }
    else if (exp < 3000) { *multiplier = 1.4; *index = 2; }
    else if (exp < 4000) { *multiplier = 1.6; *index = 3; }
    else if (exp < 5000) { *multiplier = 1.8; *index = 4; }
    else { *multiplier = 2.0; *index = 5; }
}

int main(void) {
    Employee employees[MAX_EMPLOYEES];
    Employee highest = {"", 0, 0.0};
    Employee lowest = {"", 0, 2.1};  // Initialize with value higher than possible
    int count = 0;
    int multiplier_count[MULTIPLIER_LEVELS] = {0};
    char name[MAX_NAME];

    // Input phase
    printf("Enter employee name (-1 to end):\n");
    while (count < MAX_EMPLOYEES && scanf("%s", name) == 1) {
        if (strcmp(name, "-1") == 0) break;

        strcpy(employees[count].name, name);
        printf("EXP: ");
        if (scanf("%d", &employees[count].exp) != 1) break;

        int index;
        get_multiplier(employees[count].exp, &employees[count].multiplier, &index);
        multiplier_count[index]++;

        // Update highest and lowest
        if (employees[count].multiplier > highest.multiplier) {
            highest = employees[count];
        }
        if (employees[count].multiplier < lowest.multiplier) {
            lowest = employees[count];
        }

        count++;
        printf("\nEnter employee name (-1 to end):\n");
    }

    // Output results
    printf("\n**** Salary Result ****\n");
    for (int i = 0; i < MULTIPLIER_LEVELS; i++) {
        printf("x%.1f count %d\n", 1.0 + (i * 0.2), multiplier_count[i]);
    }
    printf("The Employee get x2.0 is %s\n", highest.name);
    printf("The Employee get x1.0 is %s\n", lowest.name);

    return 0;
}
