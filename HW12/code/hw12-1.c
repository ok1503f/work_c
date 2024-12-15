#include <stdio.h>

// Define the Person structure
struct Person {
    char Name[20];
    int Age;
    int Sex;
    float Score;
};

int main() {
    // Declare two Person variables
    struct Person personA, personB;

    // Input data for Person A
    printf("Person A\n");
    printf("Name : ");
    scanf("%s", personA.Name);
    printf("Age : ");
    scanf("%d", &personA.Age);
    printf("Sex : ");
    scanf(" %c", &personA.Sex);
    printf("Score : ");
    scanf("%f", &personA.Score);

    // Input data for Person B
    printf("\nPerson B\n");
    printf("Name : ");
    scanf("%s", personB.Name);
    printf("Age : ");
    scanf("%d", &personB.Age);
    printf("Sex : ");
    scanf(" %c", &personB.Sex);
    printf("Score : ");
    scanf("%f", &personB.Score);

    // Display information for Person A
    printf("\n--| Person A Information |--\n");
    printf("Name : %s (%c)\n", personA.Name, personA.Sex);
    printf("Age : %d years old\n", personA.Age);
    printf("Score : %.2f points\n", personA.Score);

    // Display information for Person B
    printf("--| Person B Information |--\n");
    printf("Name : %s (%c)\n", personB.Name, personB.Sex);
    printf("Age : %d years old\n", personB.Age);
    printf("Score : %.2f points\n", personB.Score);

    return 0;
}