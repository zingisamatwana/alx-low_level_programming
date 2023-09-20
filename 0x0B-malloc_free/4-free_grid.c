#include <stdlib.h>

/**
 * free_grid - Frees a 2-dimensional grid created by alloc_grid.
 * @grid: Pointer to the grid to be freed.
 * @height: The height of the grid.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
			free(grid[i]);
		free(grid);
	}
}
