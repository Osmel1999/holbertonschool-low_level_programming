#include "holberton.h"
/**
 * print_diagonal - check the code for Holberton School students.
 * @n: variable of the function @n: variable of the function..
 * Return: Always 0.
 */
void print_diagonal(int n)
{
int a;
int s;

if (n == 0)
{
_putchar('\n');
}
else
{
for (a = 0; a < n; a++)
{
for (s = 0; s <= a; s++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
