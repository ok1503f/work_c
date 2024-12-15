#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Enter three numbers: \n");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("1st Number = %d\n", num1);
    printf("2nd Number = %d\n", num2);
    printf("3rd Number = %d\n", num3);

    if (num1 >= num2 && num1 >= num3) {
        printf("The 1st Number is the greatest among three\n");
    } else if (num2 >= num1 && num2 >= num3) {
        printf("The 2nd Number is the greatest among three\n");
    } else {
        printf("The 3rd Number is the greatest among three\n");
    }

    return 0;
}
