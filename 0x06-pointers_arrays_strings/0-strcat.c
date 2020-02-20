#include "holberton.h"
/**
 * *_strcat - check the code for Holberton School students.
 * @dest: pointer of the function.
 * @src: pointer of function.
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
if (dest == NULL)
{
return (NULL);
}
if (src == dest)
{
return (dest);
}
char *i = dest;
while (*i != '\0')
{
i++;
}
char *e;
while (*e != '\0')
{
*i = *e;
i++;
e++;
}
*i = '\0';
return (dest);
}
