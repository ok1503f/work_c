#include <stdio.h>
#include <string.h>

int main() {
    char input[100];  // กำหนดขนาดของอาเรย์เพื่อเก็บข้อความ
    int length, i;

    // รับข้อความจากผู้ใช้
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);  // ใช้ fgets เพื่อรับข้อมูลรวมถึงช่องว่าง

    // ลบ newline character ที่เกิดจากการกด Enter
    length = strlen(input);
    if (input[length - 1] == '\n') {
        input[length - 1] = '\0';  // เปลี่ยน newline เป็น null terminator
    }

    // แสดงผลข้อความที่กลับตัวอักษร
    printf("Output: ");
    for (i = length - 1; i >= 0; i--) {
        printf("%c", input[i]);
    }
    printf("\n");

    return 0;
}
