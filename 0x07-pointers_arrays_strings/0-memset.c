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
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
