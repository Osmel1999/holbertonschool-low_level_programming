#include "holberton.h"
/**
 *  _puts_recursion- check the code for Holberton School students.
 * @s: pointer of the function.
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
int c;
if (s[c] == '\0')
{
_putchar('\n');
return;
}
else
{
_putchar(s[c]);
s++;
_putchar(s);
}
}
