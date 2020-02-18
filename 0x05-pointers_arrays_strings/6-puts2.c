#include "holberton.h"
/**
 * puts2 - check the code for Holberton School students.
 * @str: pontier of the fuction.
 * Return: void
 */
void puts2(char *str)
{
int c;
for (c = 0; str[c] != '\0'; c++)
{
if (c == 0 || c == 2 || c == 4 || c == 6 || c == 8)
{
_putchar(c + '0');
}
}
_putchar('\n');
c++;
}
