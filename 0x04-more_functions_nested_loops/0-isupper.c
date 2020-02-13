#include "holberton.h"
#include <stdio.h>
/**
 * _isupper - check the code for Holberton School students.
 * @c: variable of the finction.
 * Return: Always 1 if  is upper and 0 if is lower.
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
return (0);
}
