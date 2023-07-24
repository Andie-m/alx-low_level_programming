#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src,
 * including the terminating null byte (\0),
 *           to the buffer pointed to by dest.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
int i;

/**
 * Loop through the source string and copy each character
 * to the destination buffer
 */
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
/* Add the null byte at the end of the destination buffer */
dest[i] = '\0';

/* Return the pointer to the destination buffer */
return (dest);
}

