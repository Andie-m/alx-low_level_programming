#include "main.h"

/**
 * print_number - Prints an integer using _putchar.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
long m = n; / Use a long variable to avoid overflow /
if (m  == INT_MIN)
{
_putchar('-');
_putchar('2');
m = 147483648; / Print the remaining digits of INT_MIN /
}
else
{
/ Handle negative numbers /
if (m < 0)
{
_putchar('-');
m = -m;
}
}
/ Recursively print each digit /
if (m / 10 != 0)
print_number(m / 10);
_putchar(m % 10 + '0');
}
