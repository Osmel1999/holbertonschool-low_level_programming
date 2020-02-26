#include "holberton.h"
/**
 * - check the code for Holberton School students.
 * @s: pointer of the function.
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_puts_recursion(s + 1);
_putchar(*s);
}

