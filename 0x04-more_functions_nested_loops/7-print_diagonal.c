#include "holberton.h"
/**
 * print_diagonal - check the code for Holberton School students.
 * @n: variable of the function @n: variable of the function..
 * Return: Always 0.
 */
void print_diagonal(int n)
{
int a;

if (n == 0)
{
_putchar('\n');
}
else
{
for (a = 0; a < n; a++)
{
_putchar('\\');
_putchar('\n');
}
}
}
