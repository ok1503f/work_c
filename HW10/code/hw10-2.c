#include <stdio.h>

int main() {
    char str[100]; // ประกาศอาเรย์สำหรับเก็บอักขระ
    char ch;
    int index = 0;

    // รับค่าจากผู้ใช้ทีละตัวอักษร
    while (1) {
        printf("Enter 1 character: ");
        scanf(" %c", &ch); // อ่านตัวอักษรจากผู้ใช้

        // เช็คว่าคือ 'Y' หรือ 'y' หรือไม่
        if (ch == 'Y' || ch == 'y') {
            break; // หยุดการทำงาน
        }

        // เก็บตัวอักษรในอาเรย์
        str[index] = ch;
        index++;
    }

    // แสดงผลลัพธ์
    str[index] = '\0'; // เพิ่ม null terminator เพื่อทำให้เป็น String
    printf("String = %s\n", str);

    return 0;
}
