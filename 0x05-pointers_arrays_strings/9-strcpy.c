#include "holberton.h"

/**
 * _strcpy - check the code for Holberton School students.
 * @src: 
 * @dest: 
 * * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
int c;
for (c = 0; src[c] != '\0'; c++)
{
dest[c] = src[c];
}
dest[c] = '\0';
return (dest);
}
