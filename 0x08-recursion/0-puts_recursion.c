#include "holberton.h"
/**
 *  _puts_recursion- check the code for Holberton School students.
 * @s: pointer of the function.
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
}
else
{
_putchar(*s);
_puts_recursion(s + 1);
}
}
