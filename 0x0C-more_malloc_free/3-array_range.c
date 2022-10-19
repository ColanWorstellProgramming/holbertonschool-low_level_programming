#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * *array_range - | starts the file
 * @min: - | var
 * @max: - | var
 * Return: | ends the file
 */

int *array_range(int min, int max)
{
int x;
int *mem;

if (min > max)
return (NULL);
mem = malloc(((max - min) * sizeof(int)) + sizeof(int));
if (mem == NULL)
return (NULL);
for (x = 0; x <= (max - (min - x)); x++)
{
mem[x] = min;
min++;
}
return (mem);
}
