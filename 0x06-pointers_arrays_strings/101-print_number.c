#include "main.h"

/**
 * print_number - Prints an integer
 * @n: Integer to be printed
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
		num = n;
	}
	num /= 10;
	if (num != 0)
		print_number(num);
	_putchar((unsigned int)n % 10 + '0');
}
