#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously created
 * @grid: grid to be freed
 * @height: no of rows in @grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
