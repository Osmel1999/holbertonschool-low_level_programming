#include "holberton.h"
/**
 * print_number - check the code for Holberton School students.
 * @n: variable of the function.
 * Return: nothing is void.
 */
void print_number(int n)
{
unsigned int a;
if (n < 0)
{
a = -n;
_putchar('-');
} else
{
a = n;
}
if (a / 10)
{
print_number(a / 10);
}
_putchar((a % 10) + '0');
}
