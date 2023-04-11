#include "main.h"

/**
 * _strdup - allocate space in memory and copy some strings into it
 * @str: string to be copied into memory
 *
 * Return: pointer to the created memory
 */
char *_strdup(char *str)
{
	int i, len = 0;
	char *str2 = NULL;

	if (!str)
		return (NULL);
	while (str[len])
		len++;
	str2 = malloc(len * sizeof(char) + 1);
	if (!str2)
		return (NULL);
	for (i = 0; i < len; i++)
		str2[i] = str[i];
	str2[i] = '\0';
	return (str2);
}
