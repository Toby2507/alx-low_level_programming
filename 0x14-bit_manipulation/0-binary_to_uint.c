#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number
 *
 * Return: converted number, 0 if there is an issue
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, res = 0;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] == '1')
			res += 1 << (strlen(b) - 1 - i);
		else if (b[i] != '0')
			return (0);
	}
	return (res);
}
