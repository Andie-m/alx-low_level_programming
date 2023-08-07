#include "main.h"
#include <stdlib.h>

/**
* count_words - counts the number of words in a string
* @str: the string to count
* Return: the number of words, or 0 if str is NULL or empty
*/
int count_words(char *str)
{
int count, i, flag;

if (str == NULL || str[0] == '\0')
return (0);

count = 0;
flag = 0;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] == ' ')
flag = 0;
else if (flag == 0)
{
flag = 1;
count++;
}
}

return (count);
}

/**
* copy_word - copies a word from a string to a new string
* @str: the string to copy from
* @start: the start index of the word
* @end: the end index of the word
* Return: a pointer to the new string, or NULL if it fails
*/
char *copy_word(char *str, int start, int end)
{
char *word;
int i;

word = malloc(sizeof(char) * (end - start + 2));
if (word == NULL)
return (NULL);

for (i = start; i <= end; i++)
word[i - start] = str[i];

word[i - start] = '\0';

return (word);
}

/**
* strtow - splits a string into words
* @str: the string to split
* Return: a pointer to an array of strings (words), or NULL if it fails or
* str is NULL or empty
*/
char **strtow(char *str)
{
char **words;
int wc, i, j, k, start, end;

wc = count_words(str);
if (wc == 0)
return (NULL);

words = malloc(sizeof(char *) * (wc + 1));
if (words == NULL)
return (NULL);

i = 0;
j = 0;
while (i < wc && str[j] != '\0')
{
while (str[j] == ' ')
j++;
start = j;
while (str[j] != ' ' && str[j] != '\0')
j++;
end = j - 1;
words[i] = copy_word(str, start, end);
if (words[i] == NULL)
{
for (k = 0; k < i; k++)
free(words[k]);
free(words);
return (NULL);
}
i++;
}

words[i] = NULL;

return (words);
}
