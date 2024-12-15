#include <stdio.h>

// ฟังก์ชันในการหาผลรวมของ 3 จำนวน
int calculateSum(int a, int b, int c) {
    return a + b + c; // คืนค่าผลรวม
}

int main() {
    int num1, num2, num3, sum;

    // รับค่าจากผู้ใช้
    printf("Input 1: ");
    scanf("%d", &num1);
    printf("Input 2: ");
    scanf("%d", &num2);
    printf("Input 3: ");
    scanf("%d", &num3);

    // เรียกใช้งานฟังก์ชัน calculateSum
    sum = calculateSum(num1, num2, num3);

    // แสดงผลลัพธ์
    printf("Summation = %d (Calculate by Additional Function)\n", sum);

    return 0;
}
