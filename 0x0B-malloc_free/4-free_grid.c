#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees a 2-dimensional array.
 * @grid: The 2D array to be freed.
 * @height: The height dimension of the grid.
 *
 * Description: This function frees the memory allocated for the 2D grid.
 * Return: Nothing.
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
