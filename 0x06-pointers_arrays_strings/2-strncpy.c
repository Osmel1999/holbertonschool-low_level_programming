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
int a;

for (a = 0; a < n && src[a] != '\0'; a++)
{
dest[a] = src[a];
}
for ( ; a < n; a++)
{
dest[a] = '\0';
}
return (dest);
}
