#include <stdio.h>

int main() {
    int N, sum = 0, i;

    // Read input from user
    if (scanf("%d", &N) != 1) {
        return 1; 
    }

    // Calculate sum from 1 to N
    for (i = 1; i <= N; i++) {
        sum += i;
    }

    // Print the sum
    printf("%d\n", sum);
    return 0;
}