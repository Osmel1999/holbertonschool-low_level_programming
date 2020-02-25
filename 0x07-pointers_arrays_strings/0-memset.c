#include "holberton.h"
/**
 * _memset - check the code for Holberton School students.
 * @s: Array
 * @b: contans
 * @n: Number of bytes
 * Return: Array
 **/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;
for (a = 0; a < n; a++)
{
s[a] = b;
}
return (s);
}
