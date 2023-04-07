#include <unistd.h>

/**
 * _putchar - prints a character to the standard output
 * @c: character to be printed
 *
 * Return: Always 0 (success)
 */
int _putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
