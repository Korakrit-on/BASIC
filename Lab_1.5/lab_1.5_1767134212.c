#include <stdio.h>

int main() {
    int number;
    int evenSum = 0;
    int oddSum = 0;
    
    // 1. Initial read for the first number (using the structure provided in pre-code)
    if (scanf("%d", &number) != 1) {
        // Handle case where input fails immediately or stream ends unexpectedly
        printf("Even Sum: %d\n", evenSum);
        printf("Odd Sum: %d\n", oddSum);
        return 0;
    }

    
    // 2. Loop while the current number is not 0 (Sentinel value)
    while (number != 0) {
        
        // 3. Process the current number (Accumulation logic)
        if (number % 2 == 0) {
            evenSum += number; // Accumulate even numbers
        } else {
            oddSum += number;  // Accumulate odd numbers
        }
        
        // 4. Read the next number for the next loop condition check
        if (scanf("%d", &number) != 1) {
            // Stop if input fails during the loop
            break; 
        }
    }

    // 5. Display the results
    printf("Even Sum: %d\n", evenSum);
    printf("Odd Sum: %d\n", oddSum);
    return 0;
}