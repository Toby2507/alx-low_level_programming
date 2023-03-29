#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @s: String to be encoded
 *
 * Return: Pointer to the string
 */
char *leet(char *s)
{
	int i = 0;
	char letter[] = {'A', 'E', 'O', 'T', 'L'};
	char number[] = {'4', '3', '0', '7', '1'};

	while (s[i])
	{
		int j = 0;

		while (j < 5)
		{
			if (s[i] == letter[j] || (s[i] - 32) == letter[j])
				s[i] = number[j];
			j++;
		}
		i++;
	}
	return (s);
}
