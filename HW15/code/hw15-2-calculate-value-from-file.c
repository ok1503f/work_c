#include <stdio.h>
FILE *file;

int main()
{
    int number;
    int input;

    file = fopen("../util/a15-2.txt", "r");
    fscanf(file, "%d", &number);

    printf("Input value from user to B: ");
    scanf("%d", &input);

    printf("Read value to A is %d\n", number);
    printf("Input value from user is %d\n", input);
    printf("Answer = %d\n", number + input);
}
