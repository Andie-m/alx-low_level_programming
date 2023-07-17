#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all numbers of base 16 in lowercase,
 * followed by a new line, using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char digit; /* Variable to store the digits */

for (digit = '0'; digit <= '9'; digit++)
{
putchar(digit); /* Print the current digit */
}

for (digit = 'a'; digit <= 'f'; digit++)
{
putchar(digit); /* Print the current digit */
}

putchar('\n'); /* Print newline */

return (0);
}
