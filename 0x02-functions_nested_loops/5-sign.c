#include "holberton.h"
/**
 * print_sign - check the code for Holberton School students.
 * @n: this is the parameter of the function.
 * Return: 1 if n is greater than 0, 0 if is equal and -1 if is less than 0.
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
if (n == 0)
{
_putchar('0');
return (0);
}
if (n < 0)
{
_putchar('-');
return (-1);
}
}
