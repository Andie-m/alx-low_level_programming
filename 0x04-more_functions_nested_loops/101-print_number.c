#include "main.h"

/**
 * print_number - Prints an integer using _putchar.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
{
/* Handle negative numbers */
_putchar('-');
_putchar('2');
_putchar('1');
_putchar('4');
_putchar('7');
_putchar('4');
_putchar('8');
_putchar('3');
_putchar('6');
_putchar('4');
_putchar('8');
return;
}
if (n < 0)
{
_putchar('-');
n = -n;
}
/* Handle the case when n is zero */
    if (n == 0)
{
_putchar('0');
return;
}
/* Recursively print each digit */
if (n / 10 != 0)
print_number(n / 10);
_putchar(n % 10 + '0');
}
