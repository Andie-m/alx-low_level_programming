#include "main.h"

/**
 * print_number - Prints an integer using _putchar.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
/* Handle negative numbers */
if (n < 0)
{
_putchar('-');
return;
{
n = -n;
}
/* Recursively print each digit */
if (n / 10 != 0)
print_number(n / 10);
_putchar(n % 10 + '0');
}

