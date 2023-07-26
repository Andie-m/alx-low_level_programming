#include <stdio.h>
#include <stdlib.h>

/**
* infinite_add - adds two numbers
* @n1: the first number
* @n2: the second number
* @r: the buffer to store the result
* @size_r: the buffer size
* Return: a pointer to the result or 0 if it can not be stored
*/
int _putchar(char c);

char *infinite_add(const char *n1, const char *n2, char *r, int size_r);

int main() {
char num1[] = "123456789";
char num2[] = "987654321";
char result[20];

char *res = infinite_add(num1, num2, result, sizeof(result));

if (res != NULL) {
for (int i = 0; res[i]; i++) {
_putchar(res[i]);
}
_putchar('\n');
} else {
_putchar('0');
_putchar('\n');
}

return (0);
}

int _putchar(char c) {

return putchar(c);
}

char *infinite_add(const char *n1, const char *n2, char *r, int size_r) {
int len1 = 0, len2 = 0, carry = 0;
const char *ptr1 = n1, *ptr2 = n2;
char *res = r;

while (*ptr1++) len1++;
while (*ptr2++) len2++;

ptr1 = n1 + len1 - 1;
ptr2 = n2 + len2 - 1;
r[size_r - 1] = '\0';

while (size_r - 1 > 0) {
int sum = carry;
        
if (ptr1 >= n1) {
sum += *ptr1 - '0';
ptr1--;
}
        
if (ptr2 >= n2) {
sum += *ptr2 - '0';
ptr2--;
}

carry = sum / 10;
sum %= 10;

r[size_r - 2] = sum + '0';
size_r--;

if (ptr1 < n1 && ptr2 < n2 && carry == 0) {
break;
}
}

if (carry != 0 || (size_r - 1 == 0 && (ptr1 >= n1 || ptr2 >= n2))) {
return (NULL);
}

while (*r) {
if (*r != '0') {
break;
}
r++;
}

return (r);
}

