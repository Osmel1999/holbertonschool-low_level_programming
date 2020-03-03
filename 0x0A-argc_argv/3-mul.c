#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 * @argc: variable
 * @argv: pointer
 * Return: Return 0
 */
int main(int argc, char **argv)
{
	int num1, num2;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}