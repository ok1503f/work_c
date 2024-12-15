#include <stdio.h>
#include <string.h>
#define MAX_STUDENTS 100
#define MAX_NAME 50

typedef struct {
    char name[MAX_NAME];
    float height;
} Student;

void bubbleSortAscending(Student arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].height > arr[j + 1].height) {
                Student temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void bubbleSortDescending(Student arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].height < arr[j + 1].height) {
                Student temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    Student roomA[MAX_STUDENTS], roomB[MAX_STUDENTS], school[MAX_STUDENTS * 2];
    int countA = 0, countB = 0;
    
    // Input for Room A
    printf("Room A\n");
    while (1) {
        printf("Name : \n");
        char name[MAX_NAME];
        scanf("%s", name);
        if (strcmp(name, "-1") == 0) break;
        
        printf("Height (cm) : \n");
        float height;
        scanf("%f", &height);
        
        strcpy(roomA[countA].name, name);
        roomA[countA].height = height;
        countA++;
    }
    
    // Input for Room B
    printf("\nRoom B\n");
    while (1) {
        printf("Name : \n");
        char name[MAX_NAME];
        scanf("%s", name);
        if (strcmp(name, "-1") == 0) break;
        
        printf("Height (cm) : \n");
        float height;
        scanf("%f", &height);
        
        strcpy(roomB[countB].name, name);
        roomB[countB].height = height;
        countB++;
    }
    
    // Sort Room A and B by ascending height
    bubbleSortAscending(roomA, countA);
    bubbleSortAscending(roomB, countB);
    
    // Combine and sort school array by descending height
    int schoolCount = 0;
    for (int i = 0; i < countA; i++) {
        school[schoolCount++] = roomA[i];
    }
    for (int i = 0; i < countB; i++) {
        school[schoolCount++] = roomB[i];
    }
    bubbleSortDescending(school, schoolCount);
    
    // Print Room A
    printf("\nRoom A -> ");
    for (int i = 0; i < countA; i++) {
        printf("%s%s", roomA[i].name, (i < countA - 1) ? " " : "");
    }
    
    // Print Room B
    printf("\nRoom B -> ");
    for (int i = 0; i < countB; i++) {
        printf("%s%s", roomB[i].name, (i < countB - 1) ? " " : "");
    }
    
    // Print School
    printf("\nSchool -> ");
    for (int i = 0; i < schoolCount; i++) {
        printf("%s%s", school[i].name, (i < schoolCount - 1) ? " " : "");
    }
    printf("\n");
    
    return 0;
}