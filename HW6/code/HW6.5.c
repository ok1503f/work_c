#include <stdio.h>

int is_prime(int num) {
    if (num <= 1) return 0; 
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; 
    }
    return 1; 
}

int main() {
    int n;

    printf("Enter number :\n");
    scanf("%d", &n);

    printf("Output:\n");
    for (int i = n; i >= 2; i--) { 
        if (is_prime(i)) {
            printf("%d ", i); 
        }
    }
    printf("\n"); 

    return 0;
}
