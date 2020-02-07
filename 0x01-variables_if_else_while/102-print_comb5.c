#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
int r;
int l;
int s = ' ';
for (r = 0; r <= 99; r++)
{
for (l = 0; l <= 99; l++)
{
if (r < l)
{
putchar(r / 10 + '0');
putchar(r % 10 + '0');
putchar(s);
putchar (l / 10 + '0');
putchar(l % 10 + '0');
if (r != 98)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
