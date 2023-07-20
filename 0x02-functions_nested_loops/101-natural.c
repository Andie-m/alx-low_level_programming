#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Computes the sum of all the multiples of 3 or 5 below 1024 (excluded)
 *              and prints the result.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int limit = 1024;
	int i, sum = 0;

	for (i = 1; i < limit; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}

	printf("The sum of all the multiples of 3 or 5 below 1024 is: %d\n", sum);

	return (0);
}

