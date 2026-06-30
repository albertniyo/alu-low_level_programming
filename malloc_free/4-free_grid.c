#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees up a 2D array of integers memory
 * @grid: 2D grid
 * @height: height
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
}
