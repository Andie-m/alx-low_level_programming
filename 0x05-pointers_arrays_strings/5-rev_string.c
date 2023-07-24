#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Pointer to the string
 */
void rev_string(char *s)
{
    int length = _strlen(s);
    int start = 0;
    int end = length - 1;
    while (start < end)
    {
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    }
}

