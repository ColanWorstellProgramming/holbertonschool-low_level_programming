#include "main.h"
#include <stdio.h>

/**
 * print_square - | starts the file
 * @size: - | var
 * Return: - | ends the file
 */

void print_square(int size)
{

int x, y;

if (size <= 0)
{
_putchar('\n');
}
else if (size > 0)
{

for (x = 0; x < size; x++)
{
for (y = 0; y < size; y++)
{
_putchar('#');
}
_putchar('\n');
}

}
}
