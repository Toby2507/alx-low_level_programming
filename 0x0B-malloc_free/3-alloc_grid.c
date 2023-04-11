#include "main.h"

/**
 * alloc_grid - generate a 2d array of integers
 * @width: no of columns
 * @height: no of rows
 *
 * Return: pointer to the 2d array
 */
int **alloc_grid(int width, int height)
{
	int **grid = NULL;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);
	grid = malloc(height * sizeof(int *));
	if (!grid)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (!grid[i])
			return (NULL);
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
