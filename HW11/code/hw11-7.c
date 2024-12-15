#include <stdio.h>

long factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

void printFactorialSequence(int n) {
    if (n == 1) {
        printf("1");
        return;
    }
    printf("%d x ", n);
    printFactorialSequence(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    
    printf("%d! = ", n);
    printFactorialSequence(n);
    printf("\n%d! = %ld\n", n, factorial(n));
    
    return 0;
}