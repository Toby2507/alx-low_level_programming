#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: String to be reversed
 */
void rev_string(char *s)
{
	int len = 0, i;

	while (s[len])
		len++;
	len--;
	for (i = 0; i < len / 2; i++)
	{
		char temp = s[i];

		s[i] = s[len - i];
		s[len - i] = temp;
	}
}
