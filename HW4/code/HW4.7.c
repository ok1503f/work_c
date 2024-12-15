#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("User input :\n");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("%.1f degree Celsius = %.1f degree Fahrenheit\n", celsius, fahrenheit);

    return 0;
}
