#include <stdio.h>

int main() {
    float x1, y1, x2, y2, midX, midY;

    printf("Input A Point:\n");
    scanf("%f %f", &x1, &y1);

    printf("Input B Point:\n");
    scanf("%f %f", &x2, &y2);

    midX = (x1 + x2) / 2;
    midY = (y1 + y2) / 2;

    printf("Mid Point of A and B is ( %.1f, %.1f )\n", midX, midY);

    return 0;
}
