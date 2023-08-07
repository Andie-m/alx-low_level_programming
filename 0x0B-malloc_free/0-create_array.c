#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and initializes it with a specific char.
 * @size: The size of the array.
 * @c: The char value to initialize the array with.
 *
 * Return: If size is 0 or memory allocation fails, returns NULL.
 *         Otherwise, returns a pointer to the created array.
 */
char *create_array(unsigned int size, char c)
{
    if (size == 0)
        return NULL;

    char *array = (char *)malloc(size * sizeof(char));

    if (array == NULL)
        return NULL;

    for (unsigned int i = 0; i < size; i++)
        array[i] = c;

    return array;
}

