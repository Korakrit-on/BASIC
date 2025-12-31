#include <stdio.h>

struct Student {
    char name[50];
    int studentId;
    float score;
};

int main() {
    int N, i;
    
    // Read the number of students
    if (scanf("%d", &N) != 1) {
        return 1;
    }

    // Declare an array of Student structures
    struct Student students[N];
    
    // Read student data
    for (i = 0; i < N; i++) {
        // Read studentId, score, and name
        if (scanf("%d %f %49s", &students[i].studentId, &students[i].score, students[i].name) != 3) {
            return 1;
        }
    }
    
    // Print student data
    for (i = 0; i < N; i++) {
        printf("ID: %d, Name: %s, Score: %.2f\n", students[i].studentId, students[i].name, students[i].score);
    }

    return 0;
}