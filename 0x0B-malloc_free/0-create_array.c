#include "stdlib.h"
#include "holberton.h"
/**
 * create_array - check the code for Holberton School students.
 * @size: variable
 * @c: variable
 * Return: Always 0.
 */

char *create_array(unsigned int size, char c)
{
char *s;
unsigned int i;

s = malloc(size * sizeof(c));
if (size == 0)
{
return (NULL);
}
if (s == 0)
{
return (NULL);
}
i = 0;
while (i < size)
{
s[i] = c;
i++;
}
s[i] = '\0';
return (s);
}
