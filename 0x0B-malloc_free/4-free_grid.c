#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
*free_grid - a function that frees a 2 dimensional grid
*previously created by your alloc_grid function.
*@height: height
*@grid: grid
*
*Return: 0(success)
*/

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)

	{
		free(grid[a]);
	}

	free(grid);
}
