#include "holberton.h"
/**
 * _strchr - check the code for Holberton School students.
 * @s: pointer
 * @c: variable
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
int a;

for (a = 0; s[a] >= '\0'; a++)
{
if (s[a] == c)
{
return (s + a);
}
}
return (NULL);
}
