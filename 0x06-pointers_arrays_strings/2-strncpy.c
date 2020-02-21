#include "holberton.h"
/**
 * _strchr - 
 * character c in the string s
 * @c: variable of the function
 * @s: pointer of the function
 * Return: pointer to first occurence of character c or null if not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
	if (*s == c)
	return (s);
	s++;
	}
	if (*s == c)
	return (s);
	else
	return ('\0');
}
