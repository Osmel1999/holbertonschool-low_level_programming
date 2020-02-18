#include "holberton.h"
/**
 * rev_string - check the code for Holberton School students.
 * @s: the pointer variable of the function.
 * Return: Nothing, it's an void function.
 */
void rev_string(char *s)
{
int i, b;
char c;

for (i = 0; s[i] != 0; i++)
{
}
b = 0;
for (i = i - 1; b < i; b++)
{
c = s[i];
s[i] = s [b];
s[b] = c;
i--;
}
}
