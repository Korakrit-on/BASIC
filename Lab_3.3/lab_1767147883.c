#include <stdio.h>

// Define the structure for a student
typedef struct {
    char name[50];
    int studentId;
    float score;
} Student;

int main() {
    int N; // Number of students
    printf("Enter the number of students: ");
    scanf("%d", &N);

    // Declare an array of Student structures
    Student students[N];

    float totalScore = 0.0; // Initialize total score

    // Loop through each student
    for (int i = 0; i < N; i++) {
        printf("Enter student ID for student %d: ", i + 1);
        scanf("%d", &students[i].studentId);

        printf("Enter score for student %d: ", i + 1);
        scanf("%f", &students[i].score);

        printf("Enter name for student %d: ", i + 1);
        scanf("%*c"); // Consume newline character
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = 0; // Remove newline character

        // Accumulate total score
        totalScore += students[i].score;
    }

    // Calculate average score
    float averageScore = (N == 0) ? 0.0 : totalScore / N;

    // Display average score
    printf("Average Score: %.2f\n", averageScore);

    return 0;
}