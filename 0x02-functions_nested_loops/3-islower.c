#include "holberton.h"
/**
 * _islower - check the code for Holberton School students.
 * @c: this is the parameter of the function.
 * Return: 1 if is a lowercase and 0 if is not a lowercase
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
