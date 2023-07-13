#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - returns pointer to a 2 dimensional array of integers.
 * @width: the columns of the array.
 * @height: the rows of the array.
 * Return: return pointer to the array.
 */

int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **) malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
			for (i = 0; i < height; i++)
				free(grid[i]);

			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
