#include "main.h"
/**
*
*factorial - calculates the factorial of a number
*
*@n: the number to calculate the factorial of 
*Return: the factorial of n
*/
void fizz_buzz(void) {
int i;
for (i = 1; i <= 100; i++) {
if (i % 3 == 0 && i % 5 == 0)
printf("FizzBuzz ");
else if (i % 3 == 0)
printf("Fizz ");
else if (i % 5 == 0)
printf("Buzz ");
else
printf("%d ", i);
}
printf("\n");
}

