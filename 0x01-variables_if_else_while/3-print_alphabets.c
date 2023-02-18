#include <stdio.h>
/**
 * main - alphabet lower and upper
 * Return: Always 0 (success)
 */

int main() {
    char lowercase, uppercase;

    putchar('Lowercase alphabet: ');
    for(lowercase = 'a'; lowercase <= 'z'; lowercase++) {
        putchar(lowercase);
        putchar(' ');
    }

    putchar('\n');

    putchar('Uppercase alphabet: ');
    for(uppercase = 'A'; uppercase <= 'Z'; uppercase++) {
        putchar(uppercase);
        putchar(' ');
    }

    putchar('\n');

    return 0;
}

