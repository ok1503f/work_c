#include <stdio.h>

int main() {
    int n; 
    int i = 1; 
    long long sum = 0; 
    long long currentTerm = 9; 

    printf("Enter number :\n");
    scanf("%d", &n);

    printf("Series = ");
    do {
        if (i > 1) {
            printf(" + "); 
        }
        printf("%lld", currentTerm); 
        sum += currentTerm; 

        currentTerm = currentTerm * 10 + 9; 
        i++; 
    } while (i <= n); 

    printf("\nSum = %lld\n", sum);  

    return 0;
}
