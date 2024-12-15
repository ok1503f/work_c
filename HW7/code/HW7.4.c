#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    int i = n;
    do {
        if (isPrime(i)) {
            printf("%d ", i);
        }
        i--;
    } while (i > 1);

    return 0;
}