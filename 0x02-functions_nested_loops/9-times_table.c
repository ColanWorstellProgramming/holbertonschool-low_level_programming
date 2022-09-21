#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * times_table - | starts file
 * Return: - | ends file
 */

void times_table(void)
{

int x, y;

for (y = 0; y < 10; y++)
{

for (x = 0; x < 10; x++)
{
printf("%d,  ", x * y );
}

printf("\n");

}

}
