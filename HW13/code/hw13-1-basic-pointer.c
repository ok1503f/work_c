#include <stdio.h>

int main()
{
    char name1[20];
    char name2[20];

    int age1;
    int *age1Ptr = &age1;
    int age2;
    int *age2Ptr = &age2;

    printf("Enter Name: ");
    scanf("%s", name1);
    printf("Enter Age: ");
    scanf("%d", &age1);
    printf("Enter Name: ");
    scanf("%s", name2);
    printf("Enter Age: ");
    scanf("%d", &age2);

    printf(" ** RESULT **\n");
    printf("Name: %s (%d)\n", name1, age1);
    printf("Name: %s (%d)\n", name2, age2);

    ChangePosition(age1Ptr, age2Ptr);

    printf(" ** SWAP AGE **\n");
    printf("Name: %s (%d)\n", name1, age1);
    printf("Name: %s (%d)\n", name2, age2);
}
void ChangePosition(int *age1Ptr, int *age2Ptr)
{
    int temp = *age1Ptr;
    *age1Ptr = *age2Ptr;
    *age2Ptr = temp;
}