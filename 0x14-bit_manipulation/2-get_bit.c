#include "main.h"

/**
 * get_bit - computes the value of a bit at a given index
 * @n: number
 * @index: index to check for
 *
 * Return: the value or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int res = -1, val;

	val = n >> index;
	if ((val & 1) == 0 || (val & 1) == 1)
		res = val & 1;
	return (res);
}
