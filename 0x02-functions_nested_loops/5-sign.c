#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: Number whose sign is to be printed
 *
 * Return: 1 if number is > 0, 0 if number is 0 and -1 if otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	} else
	{
		_putchar('-');
		return (-1);
	}
}

