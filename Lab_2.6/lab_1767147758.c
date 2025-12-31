#include <stdio.h>

int main() {
    int N_MONTHS, month, successCount = 0;
    float dailyDeposit, monthlyTotal;

    // Read the number of months
    if (scanf("%d", &N_MONTHS) != 1) {
        return 1;
    }

    // Loop through each month
    for (month = 1; month <= N_MONTHS; month++) {
        monthlyTotal = 0.0;

        // Read daily deposits until 0.00 is encountered
        while (1) {
            if (scanf("%f", &dailyDeposit) != 1) {
                break;
            }
            if (dailyDeposit == 0.00) {
                break;
            }
            monthlyTotal += dailyDeposit;
        }

        // Print the total for the month
        printf("Month %d Total: %.2f\n", month, monthlyTotal);

        // Check if the monthly total is greater than or equal to 500.00
        if (monthlyTotal >= 500.00) {
            successCount++;
        }
    }

    // Print the success count
    printf("Success Count: %d\n", successCount);

    return 0;
}