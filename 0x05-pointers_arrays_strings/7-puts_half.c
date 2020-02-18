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
while (str[c] != '\0')
{
}
if (c % 2 == 0)
{
n = c / 2;
}
else
{
n = (c + 1) / 2;
}
while (n < c)
{
_putchar(str[n]);
n++;
}
}
