#include "variadic_functions.h"

/**
 * sum_them_all - sums all of its parameters
 * @n: no of parameters
 *
 * Return: sum of the args
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list nums;

	va_start(nums, n);
	for (i = 0; i < n; i++)
		sum += va_arg(nums, int);
	va_end(nums);
	return (sum);
}
