#include "holberton.h"
/**
 * *_memcpy - check the code for Holberton School students.
 * @dest: pointer
 * @src: pointer
 * @n: variable
 * Return: pointer dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a;
for (a = 0; a < n; a++)
{
dest[a] = src[a];
}
return (dest);
}
