#include "holberton.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
int c;
char A;
for (c = 0; c < 10; c++)
{
for (A = 'a'; A <= 'z'; A++)
{
_putchar(A);
}
_putchar('\n');
}
}
