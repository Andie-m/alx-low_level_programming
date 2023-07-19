#include "print_functions.h" // Include the header file that declares _putchar

void print_alphabet(void) {
    char letter;
    for (letter = 'a'; letter <= 'z'; letter++) {
        _putchar(letter); // Call the _putchar function to print the character
    }
    _putchar('\n'); // Print a newline at the end
}

