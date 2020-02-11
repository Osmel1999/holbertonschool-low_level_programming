#include "holberton.h"
/**
 * _isalpha - check the code for Holberton School students.
 * @c: this is the parameter of the function.
 * Return: 1 if is a lowercase and uppercase and 0 if is otherwise.
 */
int _isalpha(int c)
{
if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
