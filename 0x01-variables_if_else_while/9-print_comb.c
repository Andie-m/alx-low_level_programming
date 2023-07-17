#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible combinations of single-digit
 * numbers separated by ", ". The numbers are printed in ascending order.
 * It uses the putchar function to print the digits and separators.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int digit; /* Variable to store the digits */

for (digit = 0; digit < 10; digit++)
{
putchar(digit + '0'); /* Convert digit to character and print */

if (digit < 9)
{
putchar(','); /* Print comma */
putchar(' '); /* Print space */
}
}

putchar('\n'); /* Print newline */

return (0);
}

