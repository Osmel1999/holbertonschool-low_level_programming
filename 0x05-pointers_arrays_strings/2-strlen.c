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
