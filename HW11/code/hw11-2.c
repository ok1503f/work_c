#include <stdio.h>
#include <string.h>

// Function to swap ages
void swapAge(int *age1, int *age2) {
    int temp = *age1;
    *age1 = *age2;
    *age2 = temp;
}

int main() {
    char nameA[50], nameB[50];
    int ageA, ageB;

    // Input for person A
    printf("Input A\n");
    printf("Name : \n");
    scanf("%s", nameA);
    printf("Age : \n");
    scanf("%d", &ageA);

    // Input for person B
    printf("Input B\n");
    printf("Name : \n");
    scanf("%s", nameB);
    printf("Age : \n");
    scanf("%d", &ageB);

    // Display original results
    printf("\n** RESULT **\n");
    printf("Name: %s (%d)\n", nameA, ageA);
    printf("Name: %s (%d)\n", nameB, ageB);

    // Swap ages and display results
    swapAge(&ageA, &ageB);
    printf("\n** SWAP AGE **\n");
    printf("Name: %s (%d)\n", nameA, ageA);
    printf("Name: %s (%d)\n", nameB, ageB);

    return 0;
}