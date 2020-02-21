#include "holberton.h"
/**
 * _strchr - 
 * character c in the string s
 * @dest:pointer
 * @src: pointer of the function
 * @n: variable
 * Return: pointer to first occurence of character c or null if not found
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for ( ; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
