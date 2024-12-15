#include <stdio.h>

// Function to calculate Fibonacci number at position n
int fibonacci(int n) {
    if (n <= 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Function to print Fibonacci series up to n terms
void printFibonacciSeries(int n) {
    printf("Series = ");
    for (int i = 0; i < n; i++) {
        printf("%d", fibonacci(i));
        if (i < n - 1) printf(" + ");
    }
    printf("\n");
}

// Function to calculate sum of Fibonacci series
int fibonacciSum(int n) {
    if (n <= 0) return 0;
    return fibonacci(n - 1) + fibonacciSum(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    
    printFibonacciSeries(n);
    printf("Sum = %d\n", fibonacciSum(n));
    
    return 0;
}