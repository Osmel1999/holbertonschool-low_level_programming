#include "holberton.h"
#include "holberton.h"

/**
 * print_last_digit - check the code for Holberton School students.
 * @a: variable of the pararmeter
 * Return: Always and int.
 */
int print_last_digit(int a)
{
int b;
if (a >= 0)
{
b = a % 10;
_putchar(b + '0');
return (b);
}
b = -a % 10;
_putchar(b + '0');
return (b);
}
