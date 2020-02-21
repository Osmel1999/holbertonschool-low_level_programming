#include "holberton.h"
#include <stdio.h>

/**
 * _strspn - function
 * @s: pointier of the variable 
 * @accept: pointier of the variable
 * Return: number of bytes;
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int num;
	int i;
  int c;
  int b;
	a = 0;
	while (s[a] != '\0')
  {
 t = 0;
for (c = 0; accept[c] != '\0'; c++)
{
if (s[a] == accept[c])
t = 1;
}
c = 0;
if (b == 0)
break;
num++;
a++;
}
return (a);
}
