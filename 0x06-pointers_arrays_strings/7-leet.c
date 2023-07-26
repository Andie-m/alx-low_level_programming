#include "main.h"
/**
 * leet - Encodes a string into 1337.
 * @str: The input string.
 *
 * Return: A pointer to the resulting string str.
 */
char *leet(char *str)
{
    char *ptr = str;
    char *leet_chars = "aAeEoOtTlL";
    char *leet_codes = "4433007711";

    while (*ptr)
    {
        int i;

        for (i = 0; leet_chars[i]; i++)
        {
            if (*ptr == leet_chars[i])
                *ptr = leet_codes[i];
        }

        ptr++;
    }

    return str;
}
