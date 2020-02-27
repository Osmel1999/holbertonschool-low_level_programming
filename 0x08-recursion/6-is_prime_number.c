#include "holberton.h"
int 2_is_prime_number(int n, int x);
/**
 * is_prime_number - check the code for Holberton School students.
 * @n: variable
 * Return: Always 0.
 */

int is_prime_number(int n)
{
return (2_is_prime_number(n, 2));
}

/**
 * 2_is_prime_number - check the code for Holberton School students.
 * @x: variable
 * @n: variable
 * Return: Always 0.
 */

int 2_is_prime_number(int n, int x)
{
if (n < 2)
return (0);
else if (x < n)
{
if (n % x == 0)
return (0);
return (2_is_prime_number(n, x + 1));
}
return (1);
}
