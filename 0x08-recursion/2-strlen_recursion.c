#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
int a = 0;
if (*s != '\0')
{
a = 1 + _strlen_recursion(s + 1);
}
else
{
return (0);
}
return (a);
}
