#include <stdlib.h>
#include "main.h"

/**
*alloc_grid - a function that returns a pointer to a 2 dimensional array
*@width: width input
*@height: height input
*
*Return: pointer 2
*/

int **alloc_grid(int width, int height)
{
	int **aa;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	aa = malloc(sizeof(int *) * height);

	if (aa == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		aa[a] = malloc(sizeof(int *) * width);
		if (aa[a] == NULL)

		{
			for (; a >= 0; a--)
				free(aa[a]);

			free(aa);

			return (NULL);
		}

		for (a = 0; b < width; b++)
			aa[a][b] = 0;
	}

	return (aa);
}
