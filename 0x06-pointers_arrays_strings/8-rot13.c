#include "holberton.h"

/**
 * rot13 - it rotates characters 13 places in the alphabet
 * @s: type char pointer.
 * Return: string rotated ROT13.
 */

char *rot13(char *s)
{
int a;
int b;
char c[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char d[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (a = 0; s[a] != 0; a++)
{
for (b = 0; c[b] != '\0'; b++)
{
if (s[a] == c[b])
{
s[a] = d[b];
break;
}
}
}
return (s);
}
