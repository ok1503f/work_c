#include <stdio.h>
#include <string.h>

struct Employee {
    char Name[50];
    float Salary; // เงินเดือนต่อเดือน
    float Tax; // ภาษีต่อปี
};

float calculateTax(float salary) {
    return salary * 12 * 0.07; // คำนวณภาษีต่อปี
}

int main() {
    struct Employee employees[100]; // เก็บข้อมูลพนักงานสูงสุด 100 คน
    int count = 0; // นับจำนวนพนักงาน
    char name[50];
    float salary;

    while (1) {
        printf("Employee %d's Name : \n", count + 1);
        scanf(" %[^\n]", name); // อ่านชื่อพนักงาน

        // ตรวจสอบว่าเมื่อกรอก -1 ให้หยุด
        if (strcmp(name, "-1") == 0) {
            break;
        }

        // อ่านเงินเดือน
        printf("Salary (Bath/Month) : \n");
        scanf("%f", &salary);

        // เก็บข้อมูลพนักงานในอาเรย์
        strcpy(employees[count].Name, name);
        employees[count].Salary = salary;
        employees[count].Tax = calculateTax(salary); // คำนวณภาษีต่อปี
        count++; // เพิ่มจำนวนพนักงานขึ้นหนึ่ง
    }

    // สรุปผล
    float totalSalaryPerMonth = 0.0; // รวมเงินเดือนทั้งหมดต่อเดือน
    float totalSalaryPerYear = 0.0; // รวมเงินเดือนทั้งหมดต่อปี
    float totalTax = 0.0; // รวมภาษีทั้งหมด
    struct Employee highestTaxEmployee = employees[0]; // เริ่มต้นด้วยคนแรก

    for (int i = 0; i < count; i++) {
        totalSalaryPerMonth += employees[i].Salary;
        totalSalaryPerYear += employees[i].Salary * 12;
        totalTax += employees[i].Tax;

        // ตรวจสอบคนที่จ่ายภาษีมากที่สุด
        if (employees[i].Tax > highestTaxEmployee.Tax) {
            highestTaxEmployee = employees[i];
        }
    }

    // แสดงผล
    printf("All salary per month: %.2f Bath\n", totalSalaryPerMonth);
    printf("All salary per year: %.2f Bath\n", totalSalaryPerYear);
    printf("Tax (7%% per year) : %.2f Bath\n", totalTax);
    printf("Most tax in company : %s (%.2f Bath per year)\n", highestTaxEmployee.Name, highestTaxEmployee.Tax);

    return 0;
}
