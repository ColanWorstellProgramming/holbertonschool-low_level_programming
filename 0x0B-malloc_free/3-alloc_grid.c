#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid  - |
 * @width:  - |
 * @height:  - |
 * Return: - |
 */

int **alloc_grid(int width, int height)
{
	int **y;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	y = malloc(height * sizeof(int *));
	if (y == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		y[i] = malloc(width * sizeof(int));
		if (y[i] == NULL)
		{
			for (i = i; i >= 0; i--)
			{
				free(y[i]);
			}
			free(y);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			y[i][j] = 0;
		}
	}
	return (y);
}
