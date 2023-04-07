#include "main.h"

/**
 * _strcmp - Compares 2 strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 if s1 == s2, -1 if s1 < s2, 1 if s1 > s2;
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i]; i++)
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	return (s2[i] ? s2[i] : 0);
}
