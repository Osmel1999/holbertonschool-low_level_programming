#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 
 * @n: variable of the function
 * Result: none, is void
 */
void print_to_98(int n)
{
if (n <= -10)
{
n = n * -1;
_putchar('-');
printf("%d", n);
}
else
{
n = n * -1;
_putchar('-');
printf("%d", n);
}
}
/**
 * print_to_98_2
 * @n: Number to print
 * Return: none, is void
 */
void print_to_98_2(int n)
{
if (n >= 100)
{
printf("%d", n);
}
else if (n >= 10)
{
printf("%d", n);
}
else if (n >= 0)
{
printf("%d", n);
}
else
{
print_to_98(n);
}
}
/**
 * print_to_98_3
 * @n: Number n
 * Return: Return the nothing
 */
void print_to_98_3(int n)
{
while (1)
{
if (n != 98)
{
print_to_98_2(n);
_putchar(',');
_putchar(' ');
}
if (n == 98)
{
print_number(n);
_putchar('\n');
break;
}
else if (n > 98)
{
n--;
}
else
{
n++;
}
}
}

