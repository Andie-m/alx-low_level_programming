#include "main.h"

/* A function that reverses a string */
void rev_string(char *s)
{
int i, j, len;
char temp;

/* Find the length of the string */
len = 0;
while (s[len] != '\0')
{
len++;
}

/* Swap the characters from the ends to the middle */
for (i = 0, j = len - 1; i < j; i++, j--)
{
temp = s[i];
s[i] = s[j];
s[j] = temp;
}
}
