#include "holberton.h"
int 2_sqrt_recursion(int x, int y);

/**
 * _sqrt_recursion- check the code for Holberton School students.
 * @n: variable
 * Return: Always 0.
 */

int _sqrt_recursion(int n)
{
return (2_sqrt_recursion(n, 0.5));
}

/**
 *  2_sqrt_recursion- check the code for Holberton School students.
 * @x: variable
 * @y: variable
 * Return: Always 0.
 */

int 2_sqrt_recursion(int x, int y)
{
if (y * y == x)
return (y);
else if (y * y < x)
return (2_sqrt_recursion(x, y + 1));
else
return (-1);
}
