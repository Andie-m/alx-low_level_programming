#include "main.h"
/**
 * cap_string - Capitalizes all words of a string.
 * @str: The input string.
 *
 * Return: A pointer to the resulting string str.
 */
char *cap_string(char *str)
{
    int i;
    char *ptr = str;

    while (*ptr)
    {
        if (*ptr >= 'a' && *ptr <= 'z')
        {
            if (ptr == str || *(ptr - 1) == ' ' || *(ptr - 1) == '\t' || *(ptr - 1) == '\n' || *(ptr - 1) == ',' || *(ptr - 1) == ';' || *(ptr - 1) == '.' || *(ptr - 1) == '!' || *(ptr - 1) == '?' || *(ptr - 1) == '"' || *(ptr - 1) == '(' || *(ptr - 1) == ')' || *(ptr - 1) == '{' || *(ptr - 1) == '}')
                *ptr -= 32;
        }

        ptr++;
    }

    return str;
}
