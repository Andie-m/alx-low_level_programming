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
    int fib1 = 1;
    int fib2 = 2;

    if (count >= 1) {
        printf("%d", fib1); /* Print the first Fibonacci number */
    }

    if (count >= 2) {
        printf(", %d", fib2); /* Print the second Fibonacci number */
    }

    int i;
    for (i = 2; i < count; i++) {
        int next_fib = fib1 + fib2;
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

