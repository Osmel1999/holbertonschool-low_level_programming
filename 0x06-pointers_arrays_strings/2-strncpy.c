#include "holberton.h"
/**
 * _strlen - Length function
 * @s: pontier
 * Return: variable
 */
int _strlen(char *s)
{
int a;
for (a = 0; s[a] != '\0'; a++)
{
}
return (a);
}
/**
 * _strncpy - Function
 * @dest: pointer
 * @src: pointer
 * @n: variable
 * Return: Return dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int s;
int a;
s = _strlen(src);
for (a = 0; a < n && a <= s; a++)
 {
 dest[a] = src[a];
 }
for (; a < n; a++)
 {
 dest[a] = '\0';
 }
return (dest);
}
