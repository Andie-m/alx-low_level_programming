/**
 * _strlen_recursion - Returns the length of a string.
 * @s: Input string.
 * Return: Length of the string.
 */
int _strlen_recursion(char *s)
{
if (*s == '\0') /* Base case: If we've reached the end of the string */
return (0);
else
return (1 + _strlen_recursion(s + 1)); /* Recursive call with the next character */
}

