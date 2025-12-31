#include <stdio.h> // Required for printf and scanf functions

int main() {
    int N, i;
    
    // Attempt to read an integer value for N from the user.
    // If scanf fails to read an integer (e.g., user inputs text),
    // it returns a value other than 1. In such a case, the program exits.
    if (scanf("%d", &N) != 1) {
        // For the specific problem, "Error" output is specified for N <= 0.
        // If scanf itself fails, the problem doesn't specify output,
        // so returning 1 (indicating an error) is a standard way to handle it.
        // Alternatively, one could print "Error\n" here as well if all
        // non-valid inputs should result in "Error".
        // Sticking to the problem's test cases, "Error" is only for N <= 0.
        return 1; 
    }
    
    // Check if N is less than or equal to 0.
    // If it is, print "Error" as per the problem description and test cases.
    if (N <= 0) {
        printf("Error\n");
    } else {
        // If N is a positive integer, loop N times.
        // In each iteration, print "Hello Loop!" followed by a newline.
        for (i = 0; i < N; i++) {
            printf("Hello Loop!\n");
        }
    }

    return 0; // Indicate successful execution of the program
}