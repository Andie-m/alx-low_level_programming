#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible different combinations of two
 * digits in ascending order, separated by ", ".
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int digit1, digit2; /* Variables to store the digits */

for (digit1 = 0; digit1 <= 9; digit1++)
{
for (digit2 = digit1 + 1; digit2 <= 9; digit2++)
{
putchar(digit1 + '0'); /* Print first digit */
putchar(digit2 + '0'); /* Print second digit */

if (digit1 < 8 || digit2 < 9)
{
putchar(','); /* Print comma */
putchar(' '); /* Print space */
}
}
}

putchar('\n'); /* Print newline */

return (0);
}
