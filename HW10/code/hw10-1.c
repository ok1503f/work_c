#include <stdio.h>

int main() {
    char name[100]; // ประกาศตัวแปร String เพื่อเก็บชื่อ

    // รับค่า String จากผู้ใช้
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin); // ใช้ fgets เพื่ออ่าน String รวมทั้งเว้นวรรค

    // แสดงผล
    printf("Name: %s", name);

    return 0;
}
    