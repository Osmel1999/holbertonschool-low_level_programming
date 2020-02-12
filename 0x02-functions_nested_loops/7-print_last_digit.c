#include "holberton.h"
/**
 * print_last_digit - check the code for Holberton School students.
 * @a: variable of the pararmeter
 * Return: Always and int.
 */
int print_last_digit(int a)
{
int b;
b = a % 10;
if (b < 0)
{
b = b * -1;
}
_putchar(b + '0');
return (b);
}
