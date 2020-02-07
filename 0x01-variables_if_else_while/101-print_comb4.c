#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
int i = 0;
int r;
int l;
int c;
int x;
while (i < 999)
{
r = (i / 100 + '0');
l = (i % 10 + '0');
c = (i / 10 % 10 + '0');
if (l < c && c < r)
{
putchar(l);
putchar(c);
putchar(r);
if (i != 789)
{
putchar(',');
putchar(' ');
}
}
i++;
}
}
