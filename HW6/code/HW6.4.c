#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter number :\n");
    scanf("%d", &n);

    printf("Series = ");
    for (int i = 1; i <= n; i++) {
        int num = 0; 
        for (int j = 0; j < i; j++) {
            num = num * 10 + 9; 
        }

        if (i < n) {
            printf("%d + ", num);
        } else {
            printf("%d", num); 
        }

        sum += num; 
    }

    printf("\nSum = %d\n", sum);

    return 0;
}
