#include <stdio.h>

int main() {
    int N, i;
    int passSum = 0;
    int failCount = 0;

    // Read the number of scores
    if (scanf("%d", &N) != 1) {
        return 1;
    }

    // Declare an array to store the scores
    int scores[N];

    // Read the scores and calculate the sum of passing scores and the count of failing scores
    for (i = 0; i < N; i++) {
        if (scanf("%d", &scores[i]) != 1) {
            return 1;
        }

        // Check if the score is passing (>= 50)
        if (scores[i] >= 50) {
            passSum += scores[i];
        } else {
            failCount++;
        }
    }

    // Print the sum of passing scores and the count of failing scores
    printf("Passing Scores Sum: %d\n", passSum);
    printf("Failing Students Count: %d\n", failCount);

    return 0;
}