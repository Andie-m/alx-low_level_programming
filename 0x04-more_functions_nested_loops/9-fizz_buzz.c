/**
* 
*fizzbuzz - Prints numbers from 1 to 100, 
*replacing multiples of 3 with "Fizz", 
*multiples of 5 with "Buzz", and 
*multiples of both 3 and 5 with "FizzBuzz".
*/
void fizzbuzz(void)
{
int num;
for (num = 1; num <= 100; num++)
{
if (num % 3 == 0 && num % 5 == 0)
{
printf("FizzBuzz");
}
else if (num % 3 == 0)
{
printf("Fizz");
}
else if (num % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d ", num);
}
}
}

/**
* 
*main - Calls the fizzbuzz function and prints a newline.
* 
*Return: Always 0 (success).
*/
int main(void)
{
fizzbuzz();
printf("\n");
return (0);
}
