#include "holberton.h"
/**
 * _strchr - check the code for Holberton School students.
 * @s: Something
 * @c: something
 * Return: 
 **/
char *_strchr(char *s, char c)
{
for (; *s; s++)
{
if (*s == c)
return (s);
}
if (*s == c)
return (s);
return (0);
}
