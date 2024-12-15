#include <stdio.h>

int main() {
    float height, width, area;

    
    printf(" Enter H & W : \n");
    scanf("%f %f", &height, &width);


    area = (height * width) / 2;


    printf("Triangle Area : %.1f\n", area);

    return 0;
}