#include "main.h"

/**
 * print_last_digit - Print the last digit of a number
 * @n: The number of whose last digit we want to print
 *
 * Return: The last digit of n
 */
int print_last_digit(int n)
{
	short last = n % 10;

	if (last < 0)
		last *= -1;
	_putchar(last + '0');
	return (last);
}

