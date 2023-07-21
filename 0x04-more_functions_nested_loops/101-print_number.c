#include "main.h"

/**

⦁ 
print_number - Prints an integer using _putchar.
⦁ 
@n: The integer to be printed.
*/
void print_number(int n)
{
/ Handle negative numbers /
if (n < 0)
{
_putchar('-');
if (n == INT_MIN) / Special case for INT_MIN /
{
_putchar('2'); / Print the first digit of INT_MIN /
n = 147483648; / Print the remaining digits of INT_MIN /
}
else
{
n = -n;
}
}
/ Recursively print each digit /
if (n / 10 != 0)
print_number(n / 10);
_putchar(n % 10 + '0');
}

