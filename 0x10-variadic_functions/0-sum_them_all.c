#include "variadic_functions.h"


/**
 * sum_them_all - check the code for Holberton School students.
 * @n: constans
 * Return: Always 0.
 **/
int sum_them_all(const unsigned int n, ...)
{
	int i, sum;
	va_list nums;

	va_start(nums, n);

	sum = 0;
	if (n <= 0)
		return (sum);

	for (i = 0; i < (int) n; i++)
	{
		sum += va_arg(nums, int);
	}

	va_end(nums);
	return (sum);
}
