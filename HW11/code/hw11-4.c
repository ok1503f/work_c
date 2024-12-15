#include <stdio.h>

// Function to calculate factorial
long long factorial(int n)
{
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

// Function to calculate sum of the series
long long calculateSeriesSum(int terms)
{
    long long sum = 0;
    for (int i = 0; i < terms; i++)
    {
        sum += (i + factorial(i + 1));
    }
    return sum;
}   

int main()
{
    int n;

    // Input
    scanf("%d", &n);

    // Calculate and display result
    long long result = calculateSeriesSum(n);
    printf("Sum = %lld\n", result);

    return 0;
}