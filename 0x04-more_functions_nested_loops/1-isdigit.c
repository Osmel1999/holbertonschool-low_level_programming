#include "holberton.h"
#include <stdio.h>
/**
 * _isdigit - check the code for Holberton School students.
 * @c: variable of the function.
 * Return: 1 when c is a digit and 0 when isn't.
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
