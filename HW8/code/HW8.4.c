#include <stdio.h>

int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

void printFactorialSeries(int n)
{
    if (n > 1)
    {
        printf("%d x ", n);
        printFactorialSeries(n - 1);
    }
    else
    {
        printf("1");
    }
}

int main()
{
    int n;
    printf("Enter a number: ");     
    scanf("%d", &n);

    printf("%d! = ", n);
    printFactorialSeries(n);
    printf("\n%d! = %d\n", n, factorial(n));

    return 0;
}