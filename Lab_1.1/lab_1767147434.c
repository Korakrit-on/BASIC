#include <stdio.h>

int main() {
    int N, i;

    // Read input from user
    if (scanf("%d", &N) != 1) {
        printf("Error\n");
        return 1;
    }

    // Check if input is non-positive
    if (N <= 0) {
        printf("Error\n");
        return 1;
    }

    // Loop and print "Hello Loop!" N times
    for (i = 0; i < N; i++) {
        printf("Hello Loop!\n");
    }

    return 0;
}