ส่วนที่ 1: Source Code (ภาษา C)


#include <stdio.h>

int main() {
    int zoneCode;
    float weight_kg;
    // totalCost initialized to 0.0
    float totalCost = 0.0;
    // Flag to track if the zone code is valid (1=Valid, 0=Invalid)
    int isValidZone = 1; 
    
    // รับข้อมูล zoneCode และ weight_kg
    if (scanf("%d %f", &zoneCode, &weight_kg) != 2) {
        return 1; // Error reading input
    }
    
    // ใช้ switch ในการตรวจสอบ zoneCode
    switch (zoneCode) {
        case 1: // Zone 1 (Local)
            // ใช้ nested if-else ในการกำหนดค่าขนส่งตามน้ำหนัก
            if (weight_kg <= 5.0) {
                totalCost = 50.0; // Weight <= 5 kg: Cost 50 Baht
            } else {
                totalCost = 80.0; // Weight > 5 kg: Cost 80 Baht
            }
            break;
        
        case 2: // Zone 2 (Regional)
            // ใช้ nested if-else ในการกำหนดค่าขนส่งตามน้ำหนัก
            if (weight_kg <= 10.0) {
                totalCost = 150.0; // Weight <= 10 kg: Cost 150 Baht
            } else {
                totalCost = 250.0; // Weight > 10 kg: Cost 250 Baht
            }
            break;
            
        case 3: // Zone 3 (International)
            totalCost = 500.0; // Fixed rate
            break;
            
        default:
            // Zone Code ไม่ใช่ 1, 2, หรือ 3
            isValidZone = 0;
            break;
    }

    // แสดงผลลัพธ์
    if (isValidZone) {
        // แสดงค่าขนส่งรวมทั้งหมด (Total Cost)
        printf("%.2f\n", totalCost);
    } else {
        // แสดงข้อความเมื่อ Zone Code ไม่ถูกต้อง
        printf("Invalid Zone Code\n");
    }

    return 0;
}