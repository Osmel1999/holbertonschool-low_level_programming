#include "holberton.h"
/**
 * print_square - check the code for Holberton School students.
 *@size: variable of the function.
 * Return: Always none/void.
 */
void print_square(int size)
{
int x;
int y;
if (size <= 0)
{
_putchar(' ');
}
for (y = 0; y < size; y++)
{
for (x = 0; x < size; x++)
{
_putchar('#');
}
_putchar('\n');
}
}