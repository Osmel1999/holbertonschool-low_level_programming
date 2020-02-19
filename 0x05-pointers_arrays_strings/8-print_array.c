#include "holberton.h"
#include <stdio.h>

/**
 * print_array - Print an array
 * @a: Array to print
 * @n: Lenght of the array
 */
void print_array(int *a, int n)
{
int c;
for (c = 0; c < n; c++)
{
if (c == n - 1)
printf("%d", a[c]);
else
printf("%d, ", a[c]);
}
printf("\n");
}
