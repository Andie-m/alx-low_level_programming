#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Pointer to the string
 */
void print_rev(char *s) {
    int len = _strlen(s);
    while (len > 0) {
        _putchar(s[len - 1]);
        len--;
    }
}

