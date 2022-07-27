#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid
 * @grid: the given two dimensional array
 * @height: the height of the grid
 * Return: nothing
 *
 */
void free_grid(int **grid, int height)
{
if (grid != NULL && height != 0)
{
while (height >= 0)
{
	free(grid[height]);
}
free(grid);
}
}
