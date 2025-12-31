#include <stdio.h>

struct Product {
    char name[50];
    int productId;
    float price;
};

int main() {
    struct Product item;

    printf("Enter product ID: ");
    scanf("%d", &item.productId);
    printf("Enter product price: ");
    scanf("%f", &item.price);
    printf("Enter product name: ");
    scanf("%*c"); // consume newline character
    scanf("%49s", item.name); // prevent buffer overflow

    printf("ID: %d, Price: %.2f, Name: %s\n", item.productId, item.price, item.name);

    return 0;
}