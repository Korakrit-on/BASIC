## 1. Source Code (C)


#include <stdio.h>

int main() {
    int categoryCode;
    float price_before_vat;
    float totalBill = 0.0;
    float vatAmount = 0.0;
    
    
    if (scanf("%f %d", &price_before_vat, &categoryCode) != 2) {
        return 1; 
    }
    
    
    float vatRate = 0.0;
    int isValid = 1;
    
    // Determine VAT rate based on category
    switch (categoryCode) {
        case 1: // Standard (7%)
            vatRate = 0.07;
            break;
        case 2: // Zero Rated (0%)
            vatRate = 0.00;
            break;
        case 3: // Luxury (15%)
            vatRate = 0.15;
            break;
        default:
            isValid = 0;
            break;
    }

    if (isValid) {
        // Calculate Total Price
        totalBill = price_before_vat * (1.0 + vatRate);
        
        // Calculate VAT Amount
        // Note: VAT Amount = Total Price - price_before_vat
        vatAmount = totalBill - price_before_vat;

        printf("VAT Amount: %.2f\n", vatAmount);
        printf("Total Price: %.2f\n", totalBill);
    } else {
        // หมวดหมู่อื่นๆ
        printf("Invalid Category\n");
    }

    return 0;
}