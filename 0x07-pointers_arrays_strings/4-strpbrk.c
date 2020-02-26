#include "holberton.h"
#include <stdio.h>
/**
 * _strpbrk - check the code for Holberton School students.
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
int a;
int n;
for(a = 0; s[a] != '\0'; a++)
{
for (n = 0; accept[n] != '\0'; n++)
{
if (s[a] == accept[a])
{
return (s + a);
}
}
}
}
