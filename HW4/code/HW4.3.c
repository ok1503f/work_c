#include <stdio.h>

int main() {
    int num1, num2, num3, sum;

  
    printf("Please enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

 
    sum = num1 + num2 + num3;

  
    printf("Answer = %d\n", sum);

    return 0;
}
