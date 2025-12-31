#include <stdio.h> // Include standard input/output library for printf and scanf

int main() {
    int N, i; // Declare integer variables N for input and i for loop counter

    // Attempt to read an integer value for N from standard input.
    // If scanf fails to read exactly one integer (e.g., due to non-numeric input),
    // the condition (scanf("%d", &N) != 1) becomes true.
    if (scanf("%d", &N) != 1) {
        // As per the pre-code structure, if scanf fails, the program returns 1.
        // It does not explicitly state to print "Error" for this specific case,
        // unlike the N <= 0 case for valid integer input, which does print "Error".
        return 1; // Indicate an input reading error and terminate program execution.
    }

    // Check the value of N.
    // If N is less than or equal to 0, it's considered an error condition as per the problem description (Test Cases 3 and 4).
    if (N <= 0) {
        printf("Error\n"); // Print "Error" followed by a newline character.
    } else {
        // If N is a positive integer, proceed to loop N times.
        // The loop runs from i = 0 up to (but not including) N.
        for (i = 0; i < N; i++) {
            printf("Hello Loop!\n"); // Print "Hello Loop!" followed by a newline in each iteration.
        }
    }

    return 0; // Indicate successful program execution.
}