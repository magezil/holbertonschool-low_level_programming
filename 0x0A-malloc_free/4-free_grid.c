#include <stdlib.h>
#include "holberton.h"

/**
 * free_grid - free 2D array of integers created by alloc-grid
 * @grid: grid to free
 * @height: height of grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
