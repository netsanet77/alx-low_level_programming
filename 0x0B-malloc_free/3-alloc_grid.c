#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: the width of the grid
 * @height: the height of the grid
 * Return: integer
 */
int **alloc_grid(int width, int height)
{
int **grid, i, j;
if (width <= 0 || height <= 0)
{
return (NULL);
}
grid = malloc(height * sizeof(int *));
if (!grid)
{
	free(grid);
	return (NULL);
}
for (i = 0; i < height; i++)
{
grid[i] = malloc(width * sizeof(int));
if (!grid[i])
{
	free(grid[i]);
	return (NULL);
}
}
for (i = 0; i < height; i++)
{
	for (j = 0; j < width; j++)
	{
		grid[i][j] = 0;
	}
}
return (grid);
}
