#include "holberton.h"
/**
 * puts_half - check the code for Holberton School students.
 * @str: something
 * Return: void.
 */
void puts_half(char *str)
{
int c;
for (c = 0; str[c] != '\0'; c++)
{
}
if (c + 1  % 2 != 0)
c = (c - 1) / 2;
else
c = c / 2;
c++;
for (; str[c] != '\0'; c++)
{
_putchar(str[c]);
}
_putchar('\n');
}
