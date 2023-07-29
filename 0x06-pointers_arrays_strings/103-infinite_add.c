#include <stdio.h>
/**
* infinite_add - adds two numbers
* @n1: the first number
* @n2: the second number
* @r: the buffer to store the result
* @size_r: the buffer size
* Return: a pointer to the result or 0 if it can not be stored
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r) {
int i, j, k, l, m, n;
for (i = 0; n1[i] != '\0'; i++);
for (j = 0; n2[j] != '\0'; j++);
if (i > size_r || j > size_r || i + 2 > size_r || j + 2 > size_r)
return NULL;
k = l = m = 0;
for (i--, j--, n = 0; n < size_r - 1; i--, j--, n++) {
k = (i >= 0 ? n1[i] - '0' : 0) + (j >= 0 ? n2[j] - '0' : 0) + l;
if (k > 9) {
l = 1;
k %= 10;
} else {
l = 0;}
r[n] = k + '0';}
if (l == 1) {
if (n + 1 >= size_r)
return NULL;
r[n++] = l + '0';
}
r[n] = '\0';
for (i = 0; r[i] == '0'; i++);
for (j = 0; r[i]; i++, j++)
r[j] = r[i];
r[j] = '\0';
for (i = 0, j = n - 1; i < j; i++, j--) {
k = r[i];
r[i] = r[j];
r[j] = k;}
return r;
}
