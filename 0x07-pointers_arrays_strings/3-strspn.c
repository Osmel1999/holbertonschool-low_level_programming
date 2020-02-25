#include "holberton.h"
#include <stdio.h>
/**
 * _strspn - check the code for Holberton School students.
 * @s:
 * @accept: 
 * Return: 
 * returns 
 **/
unsigned int _strspn(char *s, char *accept)
{
int l;
int a;
int j;
len = 0;
for (a = 0; s[a] != '\0'; a++)
{
for (b = 0; accept[b] != '\0'; b++)
{
if (s[a] == accept[b])
{
l++;
break;
}
}
if (s[a] != accept[b])
break;
}
return (l);
}
