#include "main.h"

/**
* print_number - prints an integer using _putchar
* @n: the integer to print
*/
void print_number(int n)
{
unsigned int m;

if (n < 0)
{
_putchar('-');
m = -n;
}
else
{
m = n;
}

if (m / 10)
{
print_number(m / 10);
}
_putchar((m % 10) + '0');
}

/**
* print_diagsums - prints the sum of the two diagonals of a square matrix
* @a: the pointer to the matrix
* @size: the size of the matrix
*
* Format: see example
*/
void print_diagsums(int *a, int size)
{
int i, j;
int sum1 = 0, sum2 = 0;

for (i = 0; i < size; i++)
{
sum1 += a[i * size + i];
}

for (i = 0, j = size - 1; i < size; i++, j--)
{
sum2 += a[i * size + j];
}

print_number(sum1);
_putchar(',');
_putchar(' ');
print_number(sum2);
_putchar('\n');
}
