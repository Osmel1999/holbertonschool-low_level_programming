#include "holberton.h"
/**
 * string_toupper - function
 * @c: pointer
 * Return: c
 */
char *string_toupper(char *c)
{
int a;

for (a = 0; c[a] != '\0'; a++)
{
if (c[a] >= 97 && c[a] < 123)
c[a] = c[a] - 32;
}
return (c);
}
