#include <stdio.h>

int main() {
    int number1, number2;

    printf("Input 1: \n");
    scanf("%d", &number1);
    
    printf("Input 2: \n");
    scanf("%d", &number2);

    if (number1 < number2) {
        printf("Number1 lower than Number2\n");
    } else if (number1 > number2) {
        printf("Number1 greater than Number2\n");
    } else {
        printf("Number1 equal Number2\n");
    }

    return 0;
}
