#include <stdio.h>

int main() {
    int N, i, quantity;
    float unitPrice, itemCost, grandTotal = 0.0;
    
    // Read the total number of items N
    if (scanf("%d", &N) != 1) {
        return 1; // Handle input error
    }
    
    // Loop N times to process each item
    for (i = 0; i < N; i++) {
        // Read unitPrice and quantity for the current item
        if (scanf("%f", &unitPrice) != 1) {
            return 1; // Handle input error
        }
        if (scanf("%d", &quantity) != 1) {
            return 1; // Handle input error
        }
        
        // Calculate the base cost for the current item
        itemCost = unitPrice * quantity;
        
        // Apply discount based on unitPrice
        if (unitPrice >= 1000.00) {
            // Apply 10% discount
            itemCost = itemCost * 0.90; // Equivalent to itemCost * (1 - 0.10)
        }
        // else: no discount, itemCost remains as unitPrice * quantity
        
        // Add the (possibly discounted) itemCost to the grand total
        grandTotal += itemCost;
    }
    
    // Print the final Grand Total, formatted to two decimal places
    printf("Grand Total: %.2f\n", grandTotal);
    
    return 0;
}