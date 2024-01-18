#include "main.h"
/**
 * free_grid - frees the grid
 * @grid: array grid
 * @height: array height
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
		{
			free(grid[height]);
		}
		free(grid);
	}
}

