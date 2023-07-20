#include "main.h"

/**
 * print_times_table - Print the n times table, starting with 0.
 * @n: The number of times.
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
		return;

	int i, j, result;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			result = i * j;

			if (j == 0)
				_putchar('0');
			else
			{
				_putchar(',');
				_putchar(' ');
				if (result < 10)
					_putchar(' ');
				if (result < 100)
					_putchar(' ');
				if (result >= 100)
					_putchar(result / 100 + '0');
				_putchar(result / 10 % 10 + '0');
				_putchar(result % 10 + '0');
			}
		}
		_putchar('\n');
	}
}

