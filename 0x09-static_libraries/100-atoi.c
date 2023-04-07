#include "main.h"
#include <limits.h>

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
		if (num > INT_MAX / 10 || (num == INT_MAX / 10 && (*s - '0') > INT_MAX % 10))
			return ((sign == 1) ? INT_MAX : INT_MIN);
		num = (num * 10) + (*s - '0');
		s++;
	}
	return (num * sign);
}
