#include <stdio.h>

int main() {
    int year;

    printf("Year(s): \n");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("February has 29 days\n");
    } else {
        printf("February has 28 days\n");
    }

    return 0;
}
 