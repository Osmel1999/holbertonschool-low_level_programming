#include <stdio.h>
#include "holberton.h"

/**
 * print_diagsums - check the code for Holberton School students.
 * @a: pointer
 * @size: variable
 */
void print_diagsums(int *a, int size)
{
int b;
unsigned int suma;
unsigned int suma2;
suma = 0;
sum2 = 0;
for (b = 0; b < size; b++)
{
suma += a[(size * b) + b];
suma2 += a[(size * (b + 1)) - (b + 1)];
}
printf("%d, %d\n", suma, suma2);
}
