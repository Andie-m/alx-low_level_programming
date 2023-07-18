#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char str[] = "_putchar\n";
ssize_t len = sizeof(str) - 1;
ssize_t bytes_written = 0;

while (bytes_written < len)
{
ssize_t result = write(STDOUT_FILENO, str + bytes_written, len - bytes_written);
if (result == -1)
return 1; /* Error occurred while writing */
bytes_written += result;
}
return (0);
}
