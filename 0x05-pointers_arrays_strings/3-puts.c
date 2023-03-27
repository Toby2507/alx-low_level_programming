#include "main.h"

/**
 * _puts - Prints a string
 * @s: String to be printed
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
