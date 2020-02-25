#include "holberton.h"
/**
<<<<<<< HEAD
 * _memset - Fills memory with a constant byte
 * @s: Array of char
 * @b: Constant character
 * @n: turn: Array filled with the constant
=======
 * _memset - check the code for Holberton School students.
 * @s: Array
 * @b: contans
 * @n: Number of bytes
 * Return: Array 
>>>>>>> b31b3a5bc97d078eb2bcba00f37f38fb7c4fd3f8
 **/
char *_memset(char *s, char b, unsigned int n)
{
int a;
for (a = 0; a < n; a++)
{
s[a] = b;
}
return (s);
}
