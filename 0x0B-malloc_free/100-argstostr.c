#include "main.h"

/**
 * argstostr - concatenates all the arguments of a string
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to the concatenated string
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, len = 0;
	char *list = NULL;

	if (!ac || !av)
		return (NULL);
	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j]; j++)
			len++;
	list = malloc(len * sizeof(char) + ac + 1);
	if (!list)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			list[k++] = av[i][j];
		list[k++] = '\n';
	}
	list[k] = '\0';
	return (list);
}
