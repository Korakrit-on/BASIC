#include <stdio.h>

int main() {
    int N, i, quantity;
    float unitPrice, itemCost, grandTotal = 0.0;

    // Read the number of items
    if (scanf("%d", &N) != 1) {
        return 1;
    }

    // Loop through each item
    for (i = 0; i < N; i++) {
        // Read the unit price and quantity of the current item
        if (scanf("%f %d", &unitPrice, &quantity) != 2) {
            return 1;
        }

        // Calculate the cost of the current item
        itemCost = unitPrice * quantity;

        // Apply discount if the unit price is 1000.00 or more
        if (unitPrice >= 1000.00) {
            itemCost *= 0.9; // 10% discount
        }

        // Add the cost of the current item to the grand total
        grandTotal += itemCost;
    }

    // Print the grand total
    printf("Grand Total: %.2f\n", grandTotal);

    return 0;
}