#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - free 2 array
 * @grid: 2 grid
 * @height: height dimension grid
 * Description: frees memory of grid
 * Return: n
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
