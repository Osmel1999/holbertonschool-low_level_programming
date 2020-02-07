#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
int r;
int c;
int l;
for (r = '0'; r <= '9'; r++)
{
for (c = '0'; c <= '9'; c++)
{
for (l = '0'; l <= '9'; l++)
{
if (r < c && c < l)
{
putchar(r);
putchar(c);
putchar(l);
if (r == '7' && c == '8' && l == '9')
{
putchar('\n');
}
else
{
putchar(',');
putchar(' ');
}
}
}
}
}
return (0);
}
