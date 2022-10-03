#include "main.h"
/**
*free_grid - allocates a grid, make pace and free space
*@grid: takes in width of grid
*@height: height of grid
*Return: free grid
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
