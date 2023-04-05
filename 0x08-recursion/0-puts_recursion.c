#include "main.h"

/**
 * _puts_recursion - Prints a string
 * @s: string to be printed
 */
void _puts_recursion(char *s)
{
	if (!*s)
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}
