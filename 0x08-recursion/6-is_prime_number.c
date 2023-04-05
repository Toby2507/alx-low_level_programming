#include "main.h"

/**
 * _is_prime - checks if a number is a prime number
 * @n: number to be check
 * @i: divisor
 *
 * Return: 1 if @n is a prime number, otherwise 0
 */
int _is_prime(int n, int i)
{
	if (i > n / 2)
		return (1);
	if (n % i == 0)
		return (0);
	_is_prime(n, ++i);
}

/**
 * is_prime_number - checks if a number is a prime number
 * @n: number to be checked
 *
 * Return: 1 if @n is a prime number, otherwise 0
 */
int is_prime_number(int n)
{
	return (n < 2 ? 0 : _is_prime(n, 2));
}
