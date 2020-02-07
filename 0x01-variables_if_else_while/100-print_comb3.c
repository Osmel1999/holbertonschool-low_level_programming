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
while (i <= 99)
{
r = (i / 10 + '0');
l = (i % 10 + '0');
if (r < l)
{
putchar(r);
putchar(l);
if (i != 99)
{
putchar(',');
putchar(' ');
}
}
i++;
}
putchar('\n');
return (0);
}
