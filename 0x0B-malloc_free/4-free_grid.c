#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - |
 * @grid:  - | var
 * @height:  - | var
 * Return: - |
 */

void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
