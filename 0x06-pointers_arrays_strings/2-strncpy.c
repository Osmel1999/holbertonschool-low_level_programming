#include "holberton.h"
/**
<<<<<<< HEAD
 *  *_strncpy- check the code for Holberton School students.
 *  @src: pointer of the function.
 *  @dest: pointer of the function.
 *  @n: variable of the function.
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
int a = 0;
while (src[a] != '\0' && a < n)
{
dest[a] = src[a];
a++;
}
while (a < n)
{
dest[a] = '\0';
a++;
}
=======
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
>>>>>>> 546a74e0b2da4abeb29206819fc4d190fe66163f
return (dest);
}
