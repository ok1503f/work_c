#include <stdio.h>

int main() {
    int n; 
    int sum = 0; 
    float avg; 

    printf("Enter value n :\n");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer for n.\n");
        return 1; 
    }

    for (int i = 1; i <= n; i++) {
        int number;
        printf("Enter number %d :\n", i);
        scanf("%d", &number);
        sum += number; 
    }

    avg = (float)sum / n;

    printf("Sum = %d\n", sum);
    printf("Avg = %.2f\n", avg); 

    return 0;
}
