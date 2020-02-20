#include "holberton.h"
/**
 *  *_strncat- check the code for Holberton School students.
 *  @src: pointer of the function.
 *  @dest: pointer of the function.
 *  @n: variable of the function.
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
int var_1, var_2;

for (var_1 = 0; dest[var_1] != '\0'; var_1++)
{
}
for (var_2 = 0; src[var_2] != '\0' && var_2 < n; var_2++, var_1++)
{
dest[var_1] = src[var_2];
}
return (dest);
}
