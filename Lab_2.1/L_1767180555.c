#include <stdio.h> // Required for scanf and printf functions

int main() {
    int N, i; // Declare integer variables: N for user input, i for the loop counter
    
    // Attempt to read an integer from the user.
    // The condition checks for two error scenarios:
    // 1. scanf("%d", &N) != 1: This evaluates to true if scanf fails to read an integer.
    //    (e.g., the user types "hello" instead of a number). In this case, scanf returns 0.
    // 2. N <= 0: This evaluates to true if the successfully read integer N is zero or negative.
    //    This covers the specific requirements from Test Cases 3 (N=0) and 4 (N=-2).
    // If either of these conditions is true, an error message is displayed.
    if (scanf("%d", &N) != 1 || N <= 0) {
        printf("Error\n"); // Display the specified error message
        return 0; // Exit the program. Returning 0 indicates that the program executed
                  // successfully in terms of handling the input, even if it resulted
                  // in an error message being printed as per the problem's requirements.
    }
    
    // If the program reaches this point, it means N was successfully read as an integer
    // and N is strictly greater than 0.
    
    // Loop N times to print "Hello Loop!"
    for (i = 0; i < N; i++) {
        printf("Hello Loop!\n"); // Print "Hello Loop!" followed by a newline character
    }
    
    return 0; // Indicate successful program execution for valid inputs.
}