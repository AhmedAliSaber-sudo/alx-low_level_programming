#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2 dimensional array.
 * @grid: pointer to 2D array.
 * @height: height of array.
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		free(grid);

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
