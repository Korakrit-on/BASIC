#include <stdio.h>

int main() {
    int N, i, quantity;
    float unitPrice, itemCost, grandTotal = 0.0;
    
    // Read the total number of items N
    if (scanf("%d", &N) != 1) {
        return 1; // Handle potential input error
    }
    
    // Loop N times to process each item
    for (i = 0; i < N; i++) {
        // Read unitPrice and quantity for the current item
        if (scanf("%f", &unitPrice) != 1) {
            return 1; // Handle potential input error
        }
        if (scanf("%d", &quantity) != 1) {
            return 1; // Handle potential input error
        }
        
        // Calculate the cost of the current item before discount
        itemCost = unitPrice * quantity;
        
        // Apply discount based on unitPrice
        if (unitPrice >= 1000.00) {
            // If unitPrice is 1000.00 or more, apply 10% discount
            itemCost = itemCost * 0.90; // Apply 10% discount (multiply by 0.90)
        }
        // else: If unitPrice is less than 1000.00, no discount is applied.
        // itemCost remains as unitPrice * quantity.
        
        // Add the (potentially discounted) itemCost to the grand total
        grandTotal += itemCost;
    }
    
    // Print the final grand total formatted to two decimal places
    printf("Grand Total: %.2f\n", grandTotal);
    return 0;
}