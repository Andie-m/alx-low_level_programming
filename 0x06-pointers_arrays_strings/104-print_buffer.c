#include <stdio.h>
#include <ctype.h>

/**
* print_buffer - prints a buffer
* @b: pointer to the buffer
* @size: size of the buffer in bytes
*/
void print_buffer(char *b, int size)
{
int i, j;

if (size <= 0)
{
putchar('\n');
return;
}

for (i = 0; i < size; i += 10)
{
/* print the position of the first byte of the line */
printf("%08x: ", i);

/* print the hexadecimal content of the buffer, 2 bytes at a time */
for (j = i; j < i + 10; j++)
{
if (j < size)
printf("%02x", b[j]);
else
printf("  ");
if (j % 2 != 0)
putchar(' ');
}

/* print the content of the buffer as characters */
for (j = i; j < i + 10; j++)
{
if (j < size && isprint(b[j]))
putchar(b[j]);
else if (j < size)
putchar('.');
}

/* print a new line */
putchar('\n');
}
}
