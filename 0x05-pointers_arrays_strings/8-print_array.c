#include "holberton.h"
#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
int c;
for (c = 0; c <= n; c++)
{
if (c < n)
{
printf("%d", a[c]);
printf(",");
printf(" ");
}
else
{
printf("%d", a[c]);
}
}
printf("\n");
}
