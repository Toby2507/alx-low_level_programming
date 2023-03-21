#include "main.h"

/**
 * _islower - Checks for lowercase letters
 * @c: The char to be checked
 *
 * Return: 1 if the character is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	return (0);
}
