#include <stdio.h>

/**
 * print_times_table - Prints the n times table starting with 0
 * @n: The number to generate the times table for
 *
 * This function prints the times table for the given number n.
 * The table starts with 0 and goes up to n times n.
 * If n is greater than 15 or less than 0, the function does not print anything.
 */
void print_times_table(int n)
{
    /* Check if n is within the valid range (0 to 15) */
    if (n < 0 || n > 15)
        return;

    /* Loop to print the times table */
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            /* Calculate the product and print it */
            int product = i * j;
            printf("%d", product);

            /* Print comma and space separator, except for the last column */
            if (j < n)
            {
                putchar(',');
                putchar(' ');

                /* Additional space for single-digit numbers to align the table */
                if (product < 10)
                    putchar(' ');
            }
        }
        /* Move to the next row after each iteration */
        putchar('\n');
    }
}

