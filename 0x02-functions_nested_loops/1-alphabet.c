#include <stdio.h>

void _putchar(char c)
{
    putchar(c);
}

void print_alphabet(void)
{
    char letter = 'a';
    while (letter <= 'z')
    {
        _putchar(letter);
        letter++;
    }
    _putchar('\n');
}

int main(void)
{
    print_alphabet();
    return 0;
}

