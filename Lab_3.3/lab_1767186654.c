#include <stdio.h>

struct Student {
    char name[50];
    int studentId;
    float score;
};

int main() {
    int N;
    scanf("%d", &N);
    
    struct Student students[N];
    float totalScore = 0.0;
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &students[i].studentId);
        scanf("%f", &students[i].score);
        scanf("%s", students[i].name);
        totalScore += students[i].score;
    }
    
    float average;
    if (N > 0) {
        average = totalScore / N;
    } else {
        average = 0.0;
    }
    
    printf("Average Score: %.2f\n", average);
    
    return 0;
}