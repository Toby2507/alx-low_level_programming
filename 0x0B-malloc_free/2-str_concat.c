#include "main.h"

/**
 * str_concat - concatenates 2 strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to the concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	int i, len1 = 0, len2 = 0;
	char *str = NULL;

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	if (len1 + len2 == 0)
		return (NULL);
	str = malloc((len1 + len2 - 1) * sizeof(char));
	if (!str)
		return (NULL);
	for (i = 0; i < len1; i++)
		str[i] = s1[i];
	for (i = 0; i < len2; i++)
		str[len1 + i] = s2[i];
	str[len1 + i] = '\0';
	return (str);
}
