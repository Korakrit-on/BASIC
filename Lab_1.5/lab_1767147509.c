#include <stdio.h>

int main() {
    int number;
    int evenSum = 0;
    int oddSum = 0;

    // Read the first number
    if (scanf("%d", &number) != 1) {
        return 1;
    }

    // Loop until the user enters 0
    while (number != 0) {
        // Check if the number is even or odd
        if (number % 2 == 0) {
            evenSum += number;
        } else {
            oddSum += number;
        }

        // Read the next number
        if (scanf("%d", &number) != 1) {
            break; 
        }
    }

    // Print the sums
    printf("Even Sum: %d\n", evenSum);
    printf("Odd Sum: %d\n", oddSum);
    return 0;
}