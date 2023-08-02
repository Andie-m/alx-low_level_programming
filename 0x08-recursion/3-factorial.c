#include "main.h"
/**
 * factorial - Calculates the factorial of a given number.
 * @n: The number for which the factorial is calculated.
 * Return: Factorial of 'n' or -1 if 'n' is negative.
 */
int factorial(int n)
{
	if (n < 0) /* Check for invalid input (n is negative) */
		return -1;

	if (n == 0) /* Base case: Factorial of 0 is 1 */
		return 1;
	else
		return n * factorial(n - 1); /* Recursive call with n-1 */
}

