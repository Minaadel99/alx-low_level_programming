#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * fee_ grid - frees 2d array
 * @grid: 2d grid
 * @height: height dim
 * Description: frees memory of grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
