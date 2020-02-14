#include "holberton.h"

/**
 *print_triangle - Print numeral signe n time
 *@size: Parameter
 *Return: always return zero
 */

void print_triangle(int size)
{
int a;
int b;
int c;

if (size <= 0)
{
_putchar('\n');
}

a = 0;
if (size > 0)
{
while (a < size)
{
a++;
for (b = 0; b < size - a; b++)
_putchar(' ');
for (c = 0; c < a; c++)
_putchar('#');
_putchar('\n');
}
}
}
