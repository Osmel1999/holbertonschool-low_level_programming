#include "holberton.h"
/**
 * *_memset - check the code for Holberton School students.
 * @s: pointer
 * @b: variable
 * @n: variable
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;
for (a = 0; a < n; a++)
{
s[a] = b;
}
return (s);
}
