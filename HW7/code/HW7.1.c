#include <stdio.h>

int main()
{
    int n, i = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (i <= n)
    {
        if (n % 2 == 0)
        {
            printf("(%d) Hello World\n", i);
        }
        else
        {
            printf("[%d] Hello World\n", i);
        }
        i++;
    }

    return 0;
}   