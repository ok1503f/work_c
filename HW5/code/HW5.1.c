#include <stdio.h>

int main() {
    char ch[4]; 


    printf("Enter 4 characters:\n");
    for (int i = 0; i < 4; i++) {
        scanf(" %c", &ch[i]); 
    }

 
    printf("Result: ");
    for (int i = 3; i >= 0; i--) { 
        printf("%c ", ch[i]);
    }
    printf("\n"); 

    return 0;
}
