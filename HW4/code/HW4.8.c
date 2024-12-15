#include <stdio.h>
#include <stdlib.h>

int main() {
    char hexInput[10]; 
    int decimalValue;

    printf("User input :\n");
    scanf("%s", hexInput);

    decimalValue = (int)strtol(hexInput, NULL, 16);


    printf("%d\n", decimalValue); 
    if(decimalValue) {
        unsigned int mask = 1 << (sizeof(decimalValue) * 8 - 1); 
        int leading_zero = 1;

        for(int i = 0; i < sizeof(decimalValue) * 8; i++) {
            if(decimalValue & mask) {
                leading_zero = 0; 
                printf("1");
            } else if(!leading_zero) {
                printf("0");
            }
            mask >>= 1; 
        }
        if (leading_zero) {
            printf("0"); 
        }
        printf("\n");
    }

    return 0;
}
