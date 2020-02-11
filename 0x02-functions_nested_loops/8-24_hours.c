#include "holberton.h"
/**
 * jack_bauer - check the code for Holberton School students.
 *
 * Return: Nothing 'cause the function is void.
 */
void jack_bauer(void)
{
int l = 0;
while (l < 24)
{
int r = 0;
while (r < 60)
{
_putchar(l / 10 + '0');
_putchar(l % 10 + '0');
_putchar(':');
_putchar(r / 10 + '0');
_putchar(r % 10 + '0');
_putchar('\n');
r++;
}
l++;
}
}
