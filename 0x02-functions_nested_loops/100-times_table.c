#include <stdio.h>

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The number to print the times table for.
 *
 * Description: This function prints the times table for a given number 'n'.
 * If n is greater than 15 or less than 0, the function does not print anything.
 * The output is comma-separated values for each row, and a new line separates each row.
 */
void print_times_table(int n) {
    int i, j;

    // Check if n is out of range (less than 0 or greater than 15)
    if (n < 0 || n > 15) {
        return; // If n is out of range, do not print anything
    }

    // Loop through rows (i) and columns (j) to print the times table
    for (i = 0; i <= n; i++) {
        for (j = 0; j <= n; j++) {
            printf("%d", i * j);
            if (j < n) {
                printf(", "); // Separate numbers by comma
            }
        }
        printf("\n"); // Move to the next row
    }
}

