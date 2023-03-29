#include "main.h"

/**
 * print_number - Prints an integer
 * @n: Integer to be printed
 */
void print_number(int n)
{
	int curr, digit;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	curr = n / 10;
	digit = n % 10;
	if (curr > 9 || curr % 10)
		print_number(curr);
	_putchar(digit + '0');
}
