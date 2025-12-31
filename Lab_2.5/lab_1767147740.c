#include <stdio.h>

int main() {
    int score;
    int countA = 0, countB = 0, countC = 0, countD = 0, countF = 0;

    // Read the first score
    if (scanf("%d", &score) != 1) {
        return 1;
    }

    // Loop until the sentinel value is reached
    while (score != -1) {
        // Check the score and increment the corresponding grade counter
        if (score >= 80) {
            countA++;
        } else if (score >= 70) {
            countB++;
        } else if (score >= 60) {
            countC++;
        } else if (score >= 50) {
            countD++;
        } else if (score >= 0) {
            countF++;
        }

        // Read the next score
        if (scanf("%d", &score) != 1) {
            break; 
        }
    }

    // Print the grade counts
    printf("Grade A Count: %d\n", countA);
    printf("Grade B Count: %d\n", countB);
    printf("Grade C Count: %d\n", countC);
    printf("Grade D Count: %d\n", countD);
    printf("Grade F Count: %d\n", countF);
    return 0;
}