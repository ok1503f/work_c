#include <stdio.h>

int main() {
    int start, end;

    printf("Start :\n");
    scanf("%d", &start);
    
    printf("End :\n");
    scanf("%d", &end);

    for (int i = start; i <= end; i++) {
        for (int j = 1; j <= 9; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n"); 
    }

    return 0;
}
