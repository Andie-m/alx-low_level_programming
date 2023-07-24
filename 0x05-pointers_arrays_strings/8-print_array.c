#include "main.h"

/* A function that prints n elements of an array of integers, followed by a new line */
void print_array(int *a, int n)
{
int i;

/* Loop through the array and print each element */
for (i = 0; i < n; i++)
{
/* Print the element and a comma, except for the last one */
printf("%d", a[i]);
if (i < n - 1)
{
printf(", ");
}
}
/* Print a new line */
printf("\n");
}
