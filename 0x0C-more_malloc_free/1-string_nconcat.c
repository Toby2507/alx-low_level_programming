#include "main.h"

/**
 * string_nconcat - concatenates a string and n characters from another
 * @s1: string 1
 * @s2: string 2
 * @n: no of char from @s2 to be concatenated
 *
 * Return: pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t i, len1 = 0, len2 = 0;
	char *str = NULL;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	len2 = (n > len2) ? len2 : n;
	str = malloc((len1 + len2 + 1) * sizeof(char));
	if (!str)
		return (NULL);
	for (i = 0; i < len1; i++)
		str[i] = s1[i];
	for (i = 0; i < len2; i++)
		str[len1 + i] = s2[i];
	str[len1 + i] = '\0';
	return (str);
}
