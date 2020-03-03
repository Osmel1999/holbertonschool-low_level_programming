#include <stdlib.h>
#include "holberton.h"

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *du;
	unsigned int i, size;

	i = 0;
	size = 0;

	if (str == NULL)
		return (NULL);

	while (str[size])
		size++;

	du = malloc(sizeof(char) * (size + 1));

	if (du == NULL)
		return (NULL);

	while ((du[i] = str[i]) != '\0')
		i++;

	return (du);
}
