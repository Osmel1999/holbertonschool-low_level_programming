#include "holberton.h"
/**
 * _strpbrk - check the code for Holberton School students.
 * @s: pointer
 * @accept: pointer
 * Return: 
 **/
char *_strpbrk(char *s, char *accept)
{
int j;
for (; *s != '\0'; s++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (*s == accept[j])
{
return (s);
}
}
}
return (0);
}
