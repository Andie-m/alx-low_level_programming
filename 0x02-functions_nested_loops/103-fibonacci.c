#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    long int prev = 1; /* Initialize the first Fibonacci number */
    long int current = 2; /* Initialize the second Fibonacci number */
    long int next = 0; /* Variable to store the next Fibonacci number */
    long int sum = 2; /* Initialize sum with the second Fibonacci number (which is even) */

    /* Calculate the Fibonacci numbers and find the sum of even-valued terms */
    while (1)
    {
        /* Calculate the next Fibonacci number */
        next = prev + current;

        /* Check if the next Fibonacci number exceeds 4,000,000 */
        if (next > 4000000)
            break;

        /* Check if the next Fibonacci number is even */
        if (next % 2 == 0)
            sum += next;

        /* Update the previous and current Fibonacci numbers for the next iteration */
        prev = current;
        current = next;
    }

    /* Print the sum of even-valued Fibonacci numbers */
    printf("%ld\n", sum);

    return (0); /* Indicate successful program execution */
}

