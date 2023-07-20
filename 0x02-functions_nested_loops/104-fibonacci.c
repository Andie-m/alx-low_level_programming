#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int count, limit;
    unsigned long int fib1, fib2, next_fib;

    count = 2; // Number of Fibonacci numbers printed so far (starting with 1 and 2)
    limit = 98; // The total number of Fibonacci numbers to print

    fib1 = 1; // First Fibonacci number
    fib2 = 2; // Second Fibonacci number

    // Print the first two Fibonacci numbers
    printf("%lu, %lu", fib1, fib2);

    // Loop to calculate and print the remaining Fibonacci numbers
    while (count < limit)
    {
        // Calculate the next Fibonacci number
        next_fib = fib1 + fib2;

        // Print the next Fibonacci number
        printf(", %lu", next_fib);

        // Update the values for the next iteration
        fib1 = fib2;
        fib2 = next_fib;

        count++;
    }

    printf("\n");

    return (0); // Indicate successful program execution
}

