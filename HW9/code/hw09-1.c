#include <stdio.h>

int main() {
    int array[100]; // กำหนดอาเรย์ขนาด 100 (สามารถเพิ่มหรือลดได้ตามต้องการ)
    int i = 0, input;

    printf("กรอกค่าลงในอาเรย์ (กรอก -1 เพื่อหยุด):\n");

    while (1) {
        printf("Input [%d] : ", i);
        scanf("%d", &input);

        if (input == -1) {
            break; // หยุดเมื่อกรอก -1
        }

        array[i] = input; // เก็บค่าที่ผู้ใช้ป้อนลงในอาเรย์
        i++;
    }

    // แสดงผล Index
    printf("\nIndex = ");
    for (int j = 0; j < i; j++) {
        printf("%d ", j);
    }

    // แสดงผล Array 
    printf("\nArray = ");
    for (int j = 0; j < i; j++) {
        printf("%d ", array[j]);
    }

    printf("\n");

    return 0;
}
