#include "holberton.h"
/**
 * puts_half - check the code for Holberton School students.
 * @str: something
 * Return: void.
 */
void puts_half(char *str)
{
int c;
int n;
for (c = 0; str[c] != '\0'; c++)
{
}
if (c % 2 == 0)
{
n = c / 2;
}
else
{
n = (c - 1) / 2;
}
for (; n < c; n++)
{
_putchar(str[n]);
}
_putchar('\n');
}
