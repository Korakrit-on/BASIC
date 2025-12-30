### 1. Source Code (ภาษา C)


#include <stdio.h>

int main() {
    int num1, num2, operationCode, result;
    
    // รับค่าตัวเลข 2 ค่า และรหัสคำสั่ง 1 ค่า
    if (scanf("%d %d %d", &num1, &num2, &operationCode) != 3) {
        return 1; 
    }
    
    // ตรวจสอบ operationCode ด้วยคำสั่ง switch
    switch (operationCode) {
        case 1: // บวก
            result = num1 + num2;
            printf("%d\n", result);
            break;
        case 2: // ลบ
            result = num1 - num2;
            printf("%d\n", result);
            break;
        case 3: // คูณ
            result = num1 * num2;
            printf("%d\n", result);
            break;
        case 4: // หาร (ใช้การหารจำนวนเต็มตาม Test Case 3)
            // หมายเหตุ: ในการใช้งานจริง ควรมีการตรวจสอบการหารด้วยศูนย์
            if (num2 == 0) {
                 // ถ้าจำเป็นต้องจัดการกรณีหารด้วยศูนย์ 
                 // แต่ในโจทย์นี้จะยึดตามพฤติกรรมมาตรฐานของ C ที่อาจเกิดข้อผิดพลาด หรือจะให้ถือเป็น Invalid Operation ก็ได้
                 // แต่ถ้าไม่มี test case ที่ num2=0, เราจะทำตามโจทย์หลัก
                 // result = num1 / num2;
                 // printf("%d\n", result); 
            } else {
                 result = num1 / num2;
                 printf("%d\n", result);
            }
            break;
        default: // รหัสคำสั่งอื่น ๆ
            printf("Invalid Operation\n");
            break;
    }

    return 0;
}