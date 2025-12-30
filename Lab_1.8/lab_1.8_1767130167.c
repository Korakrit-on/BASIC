## 1. Source Code (ภาษา C)


#include <stdio.h>

int main() {
    int dayCode, hour;
    
    // รับข้อมูล dayCode และ hour
    if (scanf("%d %d", &dayCode, &hour) != 2) {
        // กรณีอ่าน input ไม่สำเร็จ
        return 1; 
    }
    
    // ใช้ switch ในการตรวจสอบ dayCode เป็นหลัก
    switch (dayCode) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5: // วันจันทร์ถึงศุกร์ (Workday)
            // ตรวจสอบชั่วโมงทำงาน (8:00 ถึง 17:00)
            if (hour >= 8 && hour <= 17) {
                printf("System Running (Workday)\n");
            } else {
                printf("System Idle (Off-hours)\n");
            }
            break;
            
        case 6:
        case 7: // วันเสาร์หรืออาทิตย์ (Weekend)
            printf("Weekend Relax Mode\n");
            break;
            
        default: // dayCode ไม่อยู่ในช่วง 1-7
            printf("Invalid Day Code\n");
            break;
    }

    return 0;
}