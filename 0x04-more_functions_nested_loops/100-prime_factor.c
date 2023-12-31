#include <stdio.h>
#include <math.h>

/**
 * main - Entry point of the program.
 *
 * This function finds and prints the largest prime factor of a given number.
 *
 * Return: Always 0.
 */
long largest_prime_factor(long n)
{
long largest = 1;
long factor = 2;

while (n > 1)
{
if (n % factor == 0)
{
n /= factor;
largest = factor;
}
else
{
/* If factor is 2, increment it to 3 to check odd numbers only */
factor = (factor == 2) ? 3 : factor + 2;
}
}

return (largest);
}

int main(void)
{
long number = 612852475143;
long largest_prime = largest_prime_factor(number);

printf("%ld\n", largest_prime);
return (0);
}
