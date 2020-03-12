#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - check the code for Holberton School students.
 * @array: pointer
 * @size: variable
 * @action: pointerto function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
