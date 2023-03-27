#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: String to print
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	for (len--; len >= 0; len--)
		_putchar(s[len]);
	_putchar('\n');
}
