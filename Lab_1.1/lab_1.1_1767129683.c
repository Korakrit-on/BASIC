
#include <stdio.h>

int main() {
    int N, i;
    
    // รับค่า N 
    if (scanf("%d", &N) != 1) {
        return 1; 
    }
    
    // ตรวจสอบเงื่อนไข N ที่ไม่ถูกต้อง (N <= 0) ตาม Test Case 3 และ 4
    if (N <= 0) {
        printf("Error\n");
    } else {
        // วนซ้ำเพื่อแสดงผล "Hello Loop!" ซ้ำตามจำนวน N รอบ
        for (i = 0; i < N; i++) {
            printf("Hello Loop!\n");
        }
    }

    return 0;
}