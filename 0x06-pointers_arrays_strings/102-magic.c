#include "main.h"

/**
 * add_new_line - Adds a new line to the output.
 * @a: The array to print.
 */
void add_new_line(int *a)
{
a[2] = 98;
_putchar(a[2] / 10 + '0');
_putchar(a[2] % 10 + '0');
_putchar('\n');
}

int main(void)
{
int a[3] = {0, 1, 2};
    
print_array(a, 3);
add_new_line(a);

return (0);
}

/**
 * print_array - Prints an array of integers.
 * @a: The array to print.
 * @n: The number of elements in the array.
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
_putchar(a[i] + '0');

if (i != n - 1)
{
_putchar(',');
_putchar(' ');
}
}

_putchar('\n');
}

