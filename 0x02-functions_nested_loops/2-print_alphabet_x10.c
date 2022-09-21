#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * main - | starts file
 * Return: - | ends file
 */

void print_alphabet_x10(void)
{

char x;
int y;

for ( y = 0; y < 10; y++)
{

for ( x = 'a'; x <= 'z'; x++)
{

_putchar(x);

}

}

_putchar('\n');

}
