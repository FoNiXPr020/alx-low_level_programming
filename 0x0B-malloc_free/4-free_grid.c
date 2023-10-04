#include <stdlib.h>

/**
 * free_grid - Alloc_grid
 * @grid: Pointer to 2D arrays
 * @height: Array
 * Return: Void
 */

void free_grid(int **grid, int height)
{
	height--;

	while (height >= 0)
	{
		free(*(grid + height));
		height--;
	}
	free(grid);
}

