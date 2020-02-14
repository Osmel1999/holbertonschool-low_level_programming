#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
long a;
long d;
a = 612852475143;
for (d = 2; d < a; d++)
{
while (a % d == 0)
{
a = a / d;
}
}
printf("%lu", d);
printf("\n");
return (0);
}
