#include <stdio.h>
#include "holberton.h"
/**
 * swap_int - check the code for Holberton School students.
 * @a: pointer of the function
 * @b: second pointer of the function
 * Return: Nothing, 'cause is empty/void
 */
void swap_int(int *a, int *b)
{
int z = 0;
z = *a;
*a = *b;
*b = z;
}
