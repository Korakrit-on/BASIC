#include <stdio.h>

int main() {
    int termCode;
    float investmentAmount;
    float aprRate = 0.0; // Initialize APR to 0.0
    float totalInterest = 0.0;
    
    // Read input for termCode and investmentAmount
    if (scanf("%d %f", &termCode, &investmentAmount) != 2) {
        // Handle potential input errors
        return 1; 
    }
    
    // Use switch statement to determine the APR based on termCode
    switch (termCode) {
        case 1: // Term Code 1 (ระยะสั้น)
            // Nested if-else for investmentAmount
            if (investmentAmount < 5000) {
                aprRate = 0.03; // 3.0%
            } else {
                aprRate = 0.04; // 4.0%
            }
            break; // Exit switch
            
        case 2: // Term Code 2 (ระยะกลาง)
            // Nested if-else for investmentAmount
            if (investmentAmount < 10000) {
                aprRate = 0.05; // 5.0%
            } else {
                aprRate = 0.065; // 6.5%
            }
            break; // Exit switch
            
        case 3: // Term Code 3 (ระยะยาว)
            aprRate = 0.08; // 8.0% (fixed)
            break; // Exit switch
            
        // For invalid term codes (not 1, 2, or 3), aprRate remains 0.0,
        // and the final if-else block will handle the "Invalid Term Code" output.
    }
    
    // Check if the termCode was valid (1, 2, or 3)
    if (termCode >= 1 && termCode <= 3) {
        // Calculate the total interest earned
        totalInterest = investmentAmount * aprRate;
        // Print the result formatted to two decimal places
        printf("%.2f\n", totalInterest);
    } else {
        // If termCode is not 1, 2, or 3, print an error message
        printf("Invalid Term Code\n");
    }

    return 0; // Indicate successful execution
}