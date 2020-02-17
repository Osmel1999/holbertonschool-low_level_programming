#include <stdio.h>
/**
 * main - heck the code for Holberton School students.
 * 
 * Return: Always  0
 */
int main(void)
{
long int a;
long int b = 1; 
long int c = 2; 
long int sig;
for (a = 1; a <= 50; a++)
{
if (b != 20365011074)
{
printf("%ld, ", b);
}
else
{
printf("%ld\n", b);
}
sig = b + c;
b = c;
c = sig;
}
return (0);
}
