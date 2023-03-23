#include "main.h"

/**
 * print_number - Prints an integer
 * @n: Integer to be printed
 */
void print_number(int n)
{
	int i = n < 0 ? n * -1 : n, divisor = 1;

	while (i / divisor >= 10)
		divisor *= 10;
	while (divisor > 0)
	{
		int c = n / divisor;

		if (c < 0)
		{
			_putchar('-');
			_putchar((c * -1) + '0');
		}
		else
			_putchar(c + '0');
		n %= divisor;
		if (n < 0)
			n *= -1;
		divisor /= 10;
	}
}
