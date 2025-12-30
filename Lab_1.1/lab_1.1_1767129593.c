1. Source Code (ภาษา C)


#include <stdio.h>

int main() {
    int N, i;
    
    // รับค่าตัวเลขจำนวนเต็ม N 
    if (scanf("%d", &N) != 1) {
        // กรณีที่การรับค่าล้มเหลว (ไม่น่าจะเกิดขึ้นในการทดสอบมาตรฐาน)
        return 1; 
    }
    
    // ตรวจสอบเงื่อนไข N
    if (N > 0) {
        // วนซ้ำ N รอบ
        for (i = 0; i < N; i++) {
            printf("Hello Loop!\n");
        }
    } else {
        // N เป็น 0 หรือติดลบ ให้แสดง Error ตาม Test Case 3 และ 4
        printf("Error\n");
    }

    return 0;
}