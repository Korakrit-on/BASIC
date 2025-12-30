## 1. Source Code (ภาษา C)


#include <stdio.h>

int main() {
    int clearanceLevel, age, isActive;
    
    // รับข้อมูล 3 ค่า: รหัสระดับ (clearanceLevel), อายุ (age), สถานะการทำงาน (isActive)
    if (scanf("%d %d %d", &clearanceLevel, &age, &isActive) != 3) {
        return 1; 
    }
    
    // กำหนดเงื่อนไขการเข้าถึง (Access GRANTED)
    // Access GRANTED ถ้า:
    // (Level 3 และ Active) 
    // OR 
    // (Level 2 และ อายุ >= 25 ปี และ Active)
    
    if ( (clearanceLevel == 3 && isActive == 1) || 
         (clearanceLevel == 2 && age >= 25 && isActive == 1) ) 
    {
        printf("Access Granted\n");
    } else {
        printf("Access Denied\n");
    }

    return 0;
}