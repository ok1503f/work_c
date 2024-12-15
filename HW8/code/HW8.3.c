#include <stdio.h>

int main()
{
    int n, i;
    int t1 = 1, t2 = 1, nextTerm;
    int sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Series = %d + %d", t1, t2);
    sum = t1 + t2;

    for (i = 3; i <= n; ++i)
    {
        nextTerm = t1 + t2;
        printf(" + %d", nextTerm);
        sum += nextTerm;
        t1 = t2;
        t2 = nextTerm;
    }   

    printf("\nSum = %d\n", sum);

    return 0;
}