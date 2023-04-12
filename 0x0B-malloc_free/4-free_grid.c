#include <stdlib.h>
#include "main.h"

/**
 * free_grid - function to free memory stored by
 * 2d arrary
 * @height: height of grid
 * @grid: grid to free
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}
