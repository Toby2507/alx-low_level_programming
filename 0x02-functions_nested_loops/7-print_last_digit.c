#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - Print the last digit of a number
 * @n: The number of whose last digit we want to print
 *
 * Return: The last digit of n
 */
int print_last_digit(int n)
{
	int last = abs(n) % 10;

	_putchar('0' + last);
	return (last);
}

