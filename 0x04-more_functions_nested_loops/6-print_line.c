#include "holberton.h"
/**
 * print_line - check the code for Holberton School students.
 * @n: variable of the function.
 * Return: Always none/void.
 */
void print_line(int n)
{
int c;
for (c = 0; c < n; c++)
{
if (n == 0)
{
_putchar('\n');
}
_putchar('_');
}
_putchar('\n');
}
