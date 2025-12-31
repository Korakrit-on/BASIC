#include <stdio.h>

int main() {
    int N, i;
    
    // Read the integer N from the user
    // The pre-code already includes error checking for scanf
    if (scanf("%d", &N) != 1) {
        // If scanf fails to read an integer, return with an error code
        return 1; 
    }
    
    // Check if N is less than or equal to 0
    // According to Test Cases 3 and 4, this should result in "Error"
    if (N <= 0) {
        printf("Error\n");
    } else {
        // If N is positive, loop N times
        for (i = 0; i < N; i++) {
            // Print "Hello Loop!" followed by a newline for each iteration
            printf("Hello Loop!\n");
        }
    }

    return 0;
}