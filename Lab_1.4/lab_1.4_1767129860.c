### 1. Source Code (ภาษา C)


#include <stdio.h>

int main() {
    int N, sum = 0, i;
    
    // รับค่า N
    if (scanf("%d", &N) != 1) {
        return 1; 
    }
    
    // วนซ้ำเพื่อคำนวณผลรวมจาก 1 ถึง N
    // ถ้า N เป็นค่าลบหรือ 0 ลูปจะไม่ทำงาน และ sum จะเป็น 0 ตามที่ต้องการ
    for (i = 1; i <= N; i++) {
        sum = sum + i;
    }

    // แสดงผลลัพธ์ของผลรวม
    printf("%d\n", sum);
    return 0;
}