#include "holberton.h"
/**
 * puts2 - check the code for Holberton School students.
 * @str: pontier of the fuction.
 * Return: void
 */
void puts2(char *str)
{
int c;
char p;

for (c = 0; str[c] != '\0'; c++)
{
if (c % 2  == 0)
{
p = str[c];
_putchar (p);
}
}
_putchar('\n');
}
