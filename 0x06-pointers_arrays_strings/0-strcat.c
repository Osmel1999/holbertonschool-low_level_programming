#include "holberton.h"
/**
 * _strlen - check the code for Holberton School students.
 * @s: pontier of the function
 * Return: Always 0.
 */
int _strlen(char *s)
{
int c;
for (c = 0; *s != '\0'; s++)
{
c++;
}
return (c);
}
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
int l, c;

l = _streln(dest);
for (c = 0; src[c] != '\0'; c++, l++)
{
dest[l] = src[c];
}
dest[l]= '\0';
return (dest);
}
