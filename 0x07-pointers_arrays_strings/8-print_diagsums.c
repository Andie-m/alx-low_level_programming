#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix of integers.
 * @a: Pointer to the square matrix.
 * @size: The size of the square matrix.
 *
 * Format: "%d, %d\n"
 */
void print_diagsums(int *a, int size)
{
int i;
int sum1 = 0;
int sum2 = 0;

for (i = 0; i < size; i++)
{
sum1 += a[i * size + i];
sum2 += a[i * size + (size - i - 1)];
}

_putchar(sum1 / '0');
_putchar(' ');
_putchar(sum2 / '0');
_putchar('\n');
}
