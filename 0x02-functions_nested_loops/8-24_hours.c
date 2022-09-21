#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * jack_bauer - | starts file
 * Return: - | ends file
 */

void jack_bauer(void)
{

int hour, min;

for (hour = 0; hour < 24; hour++)
{

for (min = 0; min < 60; min++)
{

printf("%02d:%02d\n", hour, min);

}

}

}
