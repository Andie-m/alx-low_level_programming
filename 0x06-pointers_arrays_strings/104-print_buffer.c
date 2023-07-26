#include "main.h"
/**
 * print_buffer - Prints the content of a buffer.
 * @b: The buffer to print.
 * @size: The number of bytes to print.
 */
void print_buffer(char *b, int size)
{
int i, j;

for (i = 0; i < size; i += 10)
{
_putchar('0' + ((i >> 24) & 0xF));
_putchar('0' + ((i >> 16) & 0xF));
_putchar('0' + ((i >> 8) & 0xF));
_putchar('0' + (i & 0xF));
_putchar(':');
_putchar(' ');

for (j = 0; j < 10; j++)
{
if (i + j < size)
{
_putchar('0' + ((b[i + j] >> 4) & 0xF));
_putchar('0' + (b[i + j] & 0xF));
}
else
{
_putchar(' ');
_putchar(' ');
}

if (j % 2)
_putchar(' ');
}

for (j = 0; j < 10; j++)
{
if (i + j < size)
{
if (b[i + j] >= 32 && b[i + j] <= 126)
_putchar(b[i + j]);
else
_putchar('.');
}
}

_putchar('\n');
}
}
