#include <stdio.h>
#include "holberton.h"

/**
 * _atoi - function
 * @s: pointer
 *
 * Return: int
 */
int _atoi(char *s)
{
	int a, b, n, len, f, digit;

	a = 0;
	b = 0;
	c = 0;
	len = 0;
	d = 0;
	digi = 0;

	while (s[len] != '\0')
		len++;

	while (a < len && b == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			digi = s[a] - '0';
			if (b % 2)
				digi = -digi;
			c = c * 10 + digi;
			b = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			d = 0;
		}
		a++;
	}

	if (d == 0)
		return (0);

	return (c);
}

/**
 * main - function
 * @argc: variable
 * @argv: array 
 *
 * Return: 0 (good), 1 (fail)
 */
int main(int argc, char *argv[])
{
	int resultado, n1, n2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = n1 * n2;

	printf("%d\n", resultado);

	return (0);
}
