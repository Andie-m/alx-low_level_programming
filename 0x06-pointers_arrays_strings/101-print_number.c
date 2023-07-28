#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer to print
 */
void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}

int numDigits = 1;
int temp = n;

while (temp / 10 != 0)
{
temp /= 10;
numDigits *= 10;
}

while (numDigits >= 1)
{
_putchar((n / numDigits) + '0');
n %= numDigits;
numDigits /= 10;
}
}

