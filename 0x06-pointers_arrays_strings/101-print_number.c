#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to print.
 */
void print_number(int n)
{
int num_digits = 0;
int temp = n;
int divisor = 1;

if (n == 0)
{
_putchar('0');
return;
}
while (temp != 0)
{
num_digits++;
temp /= 10;
}

for (int i = 1; i < num_digits; i++)
divisor *= 10;

while (divisor != 0)
{
int digit = n / divisor;
_putchar(digit + '0');

n %= divisor;
divisor /= 10;
}
}

