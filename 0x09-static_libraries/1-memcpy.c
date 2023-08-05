#include "main.h"
#include <string.h>

/**
 * _memcpy - Copies memory area
 * @dest: Pointer to the destination memory area
 * @src: Pointer to the source memory area
 * @n: Number of bytes to copy
 *
 * Return: A pointer to the destination memory area @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n) {
return (memcpy(dest, src, n));
}

