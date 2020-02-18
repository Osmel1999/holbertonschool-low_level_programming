#include "holberton.h"
/**
 * _puts - check the code for Holberton School students.
 * @str: variable type pointer of the function
 * Return: Nothing 'cause is empty/void.
 */
void _puts(char *str)
{
int c;
for (c = 0; str[c] != '\0'; c++)
{
_putchar(str[c]);
}
}

