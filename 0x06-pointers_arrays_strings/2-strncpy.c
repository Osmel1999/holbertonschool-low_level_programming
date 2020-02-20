#include "holberton.h"
/**
 *  *_strncpy- check the code for Holberton School students.
 *  @src: pointer of the function.
 *  @dest: pointer of the function.
 *  @n: variable of the function.
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
int a = 0;
while (src[a] != '\0' && a < n)
{
dest[a] = src[a];
a++;
}
while (a < n)
{
dest[a] = '\0';
a++;
}
return (dest);
}
