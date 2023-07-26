#include "main.h"

/**
* print_number - prints an integer
* @n: the integer to print
*/
void print_number(int n)
{
int i, j, k, d;

/* if n is negative, print a minus sign and make it positive */
if (n < 0)
{
_putchar('-');
n = -n;
}

/* find the number of digits in n */
for (i = 0, j = n; j > 0; i++)
j /= 10;

/* if n is zero, print zero */
if (i == 0)
_putchar('0');

/* loop through the digits of n from left to right */
for (j = i - 1; j >= 0; j--)
{
/* find the power of 10 for the current position */
for (k = 1, d = 0; d < j; d++)
k *= 10;

/* print the digit at the current position */
_putchar((n / k) % 10 + '0');
}
}
