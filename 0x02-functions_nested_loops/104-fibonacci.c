#include <stdio.h>

/*
 * print_fibonacci_numbers - Prints the first 'count' Fibonacci numbers.
 * @count: The number of Fibonacci numbers to print.
 *
 * This function prints the first 'count' Fibonacci numbers, starting with 1 and 2,
 * separated by a comma and a space, followed by a new line.
 * It adheres to the ISO C90 standard and follows Betty coding style.
 */
void print_fibonacci_numbers(int count) {
    int fib1, fib2, next_fib;

    fib1 = 1;
    fib2 = 2;

    printf("%d, %d", fib1, fib2); /* Print the first two Fibonacci numbers */

    int i;
    for (i = 2; i < count; i++) {
        next_fib = fib1 + fib2;
        printf(", %d", next_fib);

        /* Update the values of fib1 and fib2 for the next iteration */
        fib1 = fib2;
        fib2 = next_fib;
    }
}

int main() {
    print_fibonacci_numbers(98);
    printf("\n");

    return (0);
}

