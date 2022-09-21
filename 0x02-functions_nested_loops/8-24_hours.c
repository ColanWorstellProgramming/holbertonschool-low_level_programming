#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * jack_bauer - | starts file
 * @n: - | int
 * Return: - | ends file
 */

void jack_bauer(void)
{

int min, hour;

for (min = 0; min < 60; min++)
{

for (hour = 0; hour < 60; hour++)
{

printf("%02d:%02d\n", hour, min);

}

}

}
