#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
char i;
char u;
for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
for (u = 'A'; u <= 'Z'; u++)
{
putchar(u);
}
putchar('\n');
return (0);
}
