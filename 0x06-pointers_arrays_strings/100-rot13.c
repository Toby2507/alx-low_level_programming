#include "main.h"

/**
 * rot13 - Encodes a string using rot13
 * @s: String to be encoded
 *
 * Return: Pointer to the string
 */
char *rot13(char *s)
{
	int i = 0;

	while (s[i])
	{
		char c = s[i];

		while ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		{
			if (c >= 'A' && c <= 'Z')
			{
				s[i] = (((c - 'A') + 13) % 26) + 'A';
				break;
			}
			s[i] = (((c - 'a') + 13) % 26) + 'a';
			break;
		}
		i++;
	}
	return (s);
}
