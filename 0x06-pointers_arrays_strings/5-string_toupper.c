#include "main.h"
/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @str: The input string.
 *
 * Return: A pointer to the resulting string str.
 */
char *string_toupper(char *str)
{
    char *ptr = str;

    while (*ptr)
    {
        if (*ptr >= 'a' && *ptr <= 'z')
            *ptr -= 32;

        ptr++;
    }

    return str;
}
