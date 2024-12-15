#include <stdio.h>

int main() {
    int n; 

    printf("Enter number:\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            printf("(%d) Hello World\n", i);
        } else {
            printf("[%d] Hello World\n", i);
        }
    }

    return 0;
}
