#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
int var_1, var_2;

for (var_1 = 0; dest[var_1] != '\0'; var_1++)
{
}
for (var_2 = 0; src[var_2] != '\0'; var_2++, var_1++)
{
dest[var_1] = src[var_2];
}
return (dest);
}
