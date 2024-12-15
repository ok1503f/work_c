#include <stdio.h>

// สร้าง struct สำหรับเก็บข้อมูลของนักเรียน
struct Student {
    char Name[20];  // ชื่อ
    float Score;    // คะแนน
};

int main() {
    // สร้างตัวแปรสำหรับเก็บข้อมูลของนักเรียน 4 คน
    struct Student students[4];

    // รับข้อมูลสำหรับนักเรียนแต่ละคน
    for (int i = 0; i < 4; i++) {
        printf("Student %c\n", 'A' + i); // แสดง Student A, B, C, D
        printf("Name: ");
        scanf("%s", students[i].Name);
        printf("Score: ");
        scanf("%f", &students[i].Score);
    }

    // แสดงผลข้อมูลชื่อ
    for (int i = 3; i >= 0; i--) { // แสดงชื่อจากคนสุดท้ายไปคนแรก
        printf("%s ", students[i].Name);
    }
    printf("\n");

    // แสดงผลคะแนน
    for (int i = 3; i >= 0; i--) { // แสดงคะแนนจากคนสุดท้ายไปคนแรก
        printf("%.2f ", students[i].Score);
    }
    printf("\n");

    return 0;
}
