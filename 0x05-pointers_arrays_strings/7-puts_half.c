#include "holberton.h"
/**
 * puts_half - check the code for Holberton School students.
 * @str: something
 * Return: void.
 */
void puts_half(char *str)
{
int c;
char p;
for (c = 0; str[c] != '\0'; c++)
{
if (c >= 5)
{
p = str[c];
_putchar(p);
}
}
_putchar('\n');
}
