#include "holberton.h"
/**
 * more_numbers - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
int c;

char a;

for (c = 0; c <= 9; c++)
{
for (a = 0; a <= 14; a++)
{
if (a > 9)
{
_putchar(a / 10 + '0');
}
_putchar(a % 10 + '0');
}
_putchar('\n');
}
}
