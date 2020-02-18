#include "holberton.h"
/**
 *  print_rev- check the code for Holberton School students.
 * @s: variable type pointer of the function
 * Return: Nothing 'cause is empty/void.
 */
void print_rev(char *s)
{
int c;
for (c = 0; s[c] != '\0'; c++)
{
}
for (c = c - 1; c >= 0; c--)
{
_putchar(s[c]);
}
_putchar('\n');
}
