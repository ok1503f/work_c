#include <stdio.h>

int main() {
    int score; 
    char grade; 

    printf("enter score :\n");
    scanf("%d", &score);

    for (int i = 0; i < 1; i++) {
        if (score < 50) {
            grade = 'F';
        } else if (score >= 50 && score < 55) {
            grade = 'D';
        } else if (score >= 55 && score < 60) {
            grade = 'D+';
        } else if (score >= 60 && score < 65) {
            grade = 'C';
        } else if (score >= 65 && score < 70) {
            grade = 'C+';
        } else if (score >= 70 && score < 75) {
            grade = 'B';
        } else if (score >= 75 && score < 80) {
            grade = 'B+';
        } else if (score >= 80) {
            grade = 'A';
        }
    }

    printf("%c !\n", grade);

    return 0;
}
