#include "main.h"
int strcount(char *);
int trim(char *, int);
/**
 * strtow - splits a string into words
 * @str: string under review
 *
 * Return: pointer to the array of words
 */
char **strtow(char *str)
{
	char **list = NULL;
	int cols = strcount(str);
	int i, j = 0, k, l, len, start;

	if (!str || !cols)
		return (NULL);
	list = malloc(cols * sizeof(char *) + 1);
	if (!list)
		return (NULL);
	for (i = 0; i < cols; i++)
	{
		len = 0;
		start = trim(str, j);
		for (j = start; str[j] && str[j] != ' '; j++)
			len++;
		list[i] = malloc(len * sizeof(char) + 1);
		if (!list[i])
		{
			for (l = 0; l < i; l++)
				free(list[l]);
			free(list);
			return (NULL);
		}
		for (k = 0; (start + k) < j; k++)
			list[i][k] = str[start + k];
		list[i][k] = '\0';
	}
	list[i] = NULL;
	return (list);
}

/**
 * strcount - computes the length and no of words in a string
 * @s: string under review
 *
 * Return: no of words of @s
 */
int strcount(char *s)
{
	int len = 0, cols = 0;

	while (s[len])
	{
		if (s[len] == ' ')
		{
			len++;
			continue;
		}
		if (s[len + 1] == ' ' || !s[len + 1])
		{
			cols++;
			len++;
			continue;
		}
		len++;
	}
	return (cols);
}

/**
 * trim - removes the leading spaces in a string starting at @start
 * @s: string under review
 * @start: starting index
 *
 * Return: index of the next non-space character in @s
 */
int trim(char *s, int start)
{
	int i;

	for (i = start; s[i]; i++)
		if (s[i] != ' ')
			break;
	return (i);
}
