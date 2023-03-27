#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: String to be converted
 *
 * Return: Converted integer
 */
int _atoi(char *s)
{
	short sign = 1;
	int num = 0;

	while (*s)
	{
		if (*s >= '0' && *s <= '9')
			break;
		if (*s == '-' || *s == '+')
			sign *= (*s == '-') ? -1 : 1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		num = (num * 10) + (*s - '0');
		s++;
	}
	return (num * sign);
}
