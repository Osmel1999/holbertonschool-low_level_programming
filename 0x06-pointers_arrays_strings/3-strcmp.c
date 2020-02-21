#include "holberton.h"
/**
 * _strcmp - function
 * @s1:  pointer variable.
 * @s2:  pointer variable.
 * Return: comparision of two strings.
 */
int _strcmp(char *s1, char *s2)
{
int a;
for (a = 0; s1[a] != '\0' || s2[a] != '\0' ; a++)
{
if (s1[a] != s2[a])
return (s1[a] - s2[a]);
}
return (0);
}
