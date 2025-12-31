#include <stdio.h>

#define FILENAME "output_data.txt"

int main() {
    FILE *fptr;
    int year = 2025;

    // 1. Open the file for writing ("w" mode)
    fptr = fopen(FILENAME, "w");

    // Check if the file opened successfully
    if (fptr == NULL) {
        printf("ERROR: Could not open file %s for writing.\n", FILENAME);
        return 1; // Exit with error code
    }

    printf("--- FILE WRITING PROCESS ---\n");
    printf("Writing data to %s...\n", FILENAME);

    // 2. Write data to the file using fprintf()
    fprintf(fptr, "Hello, C File Handling is easy.\n");
    fprintf(fptr, "%d\n", year);

    // 3. Close the file (crucial step)
    fclose(fptr);

    // 4. Console Report (Final output)
    printf("File writing complete.\n");
    printf("\n--- FILE OPERATION REPORT ---\n");
    printf("Action: File created and data written successfully.\n");
    printf("Filename: %s\n", FILENAME);

    return 0;
}