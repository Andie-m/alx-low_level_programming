#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
long int fibonacci[50];

/* Initialize the first two Fibonacci numbers */
fibonacci[0] = 1; /* First Fibonacci number is 1 */
fibonacci[1] = 2; /* Second Fibonacci number is 2 */

/* Calculate and store the remaining Fibonacci numbers */
for (i = 2; i < 50; i++)
{
/* Fibonacci number is the sum of the previous two numbers */
fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
}

/* Print the Fibonacci numbers with the specified format */
for (i = 0; i < 49; i++)
{
/* Print each Fibonacci number followed by a comma and a space */
printf("%ld, ", fibonacci[i]);
}
/* Print the last Fibonacci number followed by a new line */
printf("%ld\n", fibonacci[49]);

return (0); /* Indicate successful program execution */
}

