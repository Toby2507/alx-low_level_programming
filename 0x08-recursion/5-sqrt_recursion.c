#include "main.h"

/**
 * _sqrt - computes the natural square root of a number
 * @n: number whose sqrt is to be computed
 * @i: iterate number
 *
 * Return: natural sqrt of @n;
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number whose sqrt is to be computed
 *
 * Return: sqrt of @n
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
