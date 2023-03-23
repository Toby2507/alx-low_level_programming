#include "main.h"

/**
 * _isdigit - Checks for a digit (0 - 9)
 * @c: arg to be checked
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}
