#include <stdio.h>

int main() {
    int N, i;
    
    // Read an integer value for N from the user.
    // The pre-code includes a basic check for scanf failure.
    // If scanf fails to read an integer (e.g., non-numeric input), it returns 0.
    // In such cases, the program will return 1, indicating an input error.
    if (scanf("%d", &N) != 1) {
        return 1; // Exit with an error code if input is not a valid integer.
    }
    
    // Check if N is less than or equal to 0.
    // According to Test Cases 3 and 4, this should result in an "Error".
    if (N <= 0) {
        printf("Error\n");
    } else {
        // If N is greater than 0, loop N times.
        // In each iteration, print "Hello Loop!" followed by a newline character.
        for (i = 0; i < N; i++) {
            printf("Hello Loop!\n");
        }
    }

    return 0; // Indicate successful program execution.
}