#include "holberton.h"
/**
 * print_most_numbers - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
char a;
for (a = '0'; a <= '9'; a++)
{
if (a != '2')
{
if (a != '4')
{
_putchar(a);
}
}
}
_putchar('\n');
}
