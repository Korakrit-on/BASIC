#include <stdio.h>

int main() {
    int number;
    int success; // Used to capture the return value of scanf

    // The do-while loop ensures robust input validation, running at least once.
    do {
        printf("Enter a number (1-10): ");
        
        success = scanf("%d", &number);
        
        if (success != 1) {
            // Handle non-integer input to prevent infinite loop
            // If the input fails, we clear the buffer and set 'number' to 0 (which is invalid) to force the loop condition to be true.
            printf("Error: Invalid input format.\n"); 
            // Clear the input buffer until newline is encountered
            while (getchar() != '\n'); 
            number = 0; 
        }

        // Requirement 2: If the number is outside the required range (1 to 10), show an error.
        if (number < 1 || number > 10) {
            printf("Error: Value must be 1-10.\n");
        }
        
    } while (number < 1 || number > 10); // Requirement 1: Loop while the number is invalid

    // Requirement 3: Output success message
    printf("Input accepted: %d\n", number);
    
    return 0;
}