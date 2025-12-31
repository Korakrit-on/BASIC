#include <stdio.h>

int main() {
    int N, i;
    
    // รับค่า N (จำนวนตัวเลขที่จะรับ)
    if (scanf("%d", &N) != 1) {
        return 1;
    }

    // ประกาศ Array ของ int ที่มีขนาด N
    int scores[N];
    
    // รับค่าตัวเลขจำนวนเต็ม N ตัว เข้าไปเก็บใน Array ตามลำดับ
    for (i = 0; i < N; i++) {
        if (scanf("%d", &scores[i]) != 1) {
            return 1;
        }
    }
    
    // แสดงผลตัวเลขที่เก็บใน Array จากท้ายไปหน้า (ย้อนกลับ)
    for (i = N - 1; i >= 0; i--) {
        printf("%d\n", scores[i]);
    }

    return 0;
}