#include <stdio.h>

/**
* infinite_add - adds two numbers
* @n1: the first number
* @n2: the second number
* @r: the buffer to store the result
* @size_r: the buffer size
* Return: a pointer to the result or 0 if it can not be stored
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i, j, k, l, m, n;

/* find the length of n1 and n2 */
for (i = 0; n1[i] != '\0'; i++)
;
for (j = 0; n2[j] != '\0'; j++)
;

/* if the result is longer than size_r, return 0 */
if (i > size_r || j > size_r || i + 1 == size_r || j + 1 == size_r)
return (0);

/* initialize k, l and m to zero */
k = l = m = 0;

/* loop from right to left */
for (i--, j--, n = 0; n < size_r - 1; i--, j--, n++)
{
/* add the digits and the carry */
k = (i >= 0 ? n1[i] - '0' : 0) + (j >= 0 ? n2[j] - '0' : 0) + l;

/* if the sum is greater than 9, set the carry and the remainder */
if (k > 9)
{
l = 1;
k %= 10;
}
else
l = 0;

/* convert the sum to a character and store it in r */
r[n] = k + '0';
}

/* if there is a carry at the end, store it in r */
if (l == 1)
r[n++] = l + '0';

/* null-terminate r */
r[n] = '\0';

/* reverse r */
for (i = 0, j = n - 1; i < j; i++, j--)
{
k = r[i];
r[i] = r[j];
r[j] = k;
}

/* return r */
return (r);
}


