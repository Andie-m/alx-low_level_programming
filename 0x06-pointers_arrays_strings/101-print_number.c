#include "main.h"

/**
 * print_number - Prints an integer using _putchar.
 * @n: The integer to print.
 */
void print_number(int n)
{
int num_digits, div;

num_digits = 1;
div = 1;

if (n < 0)
{
_putchar('-');
n = -n;
}

/* Calculate the number of digits in the number */
while ((n / div) >= 10)
{
div *= 10;
num_digits++;
}

/* Print each digit */
while (div != 0)
{
_putchar('0' + (n / div));
n %= div;
div /= 10;
}
}
