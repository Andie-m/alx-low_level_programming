#include <stdio.h>

/**

⦁ 
main - prints the first 98 Fibonacci numbers, starting with 1 and 2
⦁ 
Return: 0
*/

int main(void)
{
int i;
unsigned long int a = 0, b = 1, c, a1, a2, b1, b2, c1, c2;

for (i = 0; i < 98; i++)
{
if (i < 91)
{
c = a + b;
printf("%lu", c);
a = b;
b = c;
}
else
{
if (i == 91)
{
a1 = a / 1000000000;
a2 = a % 1000000000;
b1 = b / 1000000000;
b2 = b % 1000000000;
}
c1 = a1 + b1;
c2 = a2 + b2;
if (a2 + b2 > 999999999)
{
c1 += 1;
c2 %= 1000000000;
}
printf("%lu%lu", c1, c2);
a1 = b1;
a2 = b2;
b1 = c1;
b2 = c2;
}
if (i != 97)
printf(", ");
}
printf("\n");
return (0);
}
