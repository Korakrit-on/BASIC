### 1. Source Code (ภาษา C)


#include <stdio.h>

int main() {
    int planCode;
    float dataUsage_GB;
    float totalBill = 0.0;
    
    // รับข้อมูล 2 ค่า คือ รหัสแพ็กเกจ (planCode) และ ปริมาณการใช้ข้อมูล (dataUsage_GB)
    if (scanf("%d %f", &planCode, &dataUsage_GB) != 2) {
        return 1; 
    }
    
    
    if (planCode == 1) {
        // Plan Code 1 (Basic Plan): อัตราพื้นฐาน 299 บาท
        totalBill = 299.0;
        
        if (dataUsage_GB > 10.0) {
            // Data > 10 GB: คิดเพิ่ม 10 บาทต่อ GB ส่วนเกิน
            float excess_data = dataUsage_GB - 10.0;
            totalBill += 10.0 * excess_data;
        }
        
    } else if (planCode == 2) {
        // Plan Code 2 (Premium Plan): อัตราพื้นฐาน 599 บาท
        totalBill = 599.0;
        
        if (dataUsage_GB > 20.0) {
            // Data > 20 GB: คิดเพิ่ม 5 บาทต่อ GB ส่วนเกิน บวกค่าปรับคงที่ 50 บาท
            float excess_data = dataUsage_GB - 20.0;
            // Total Bill = 599 + 50 + 5 * (Usage - 20)
            totalBill = 599.0 + 50.0 + (5.0 * excess_data);
        }
        
    }
    
    
    // แสดงผลลัพธ์
    if (planCode == 1 || planCode == 2) {
        printf("%.2f\n", totalBill);
    } else {
        printf("Invalid Plan Code\n");
    }

    return 0;
}