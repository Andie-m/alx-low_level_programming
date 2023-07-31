#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 * @s: Pointer to the memory area to fill.
 * @b: The constant byte to fill the memory with.
 * @n: Number of bytes to fill.
 *
 * Return: A pointer to the memory area @s.
 */

char *_memcpy(char *dest, char *src,
		unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}
