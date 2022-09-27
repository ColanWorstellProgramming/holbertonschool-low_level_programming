#include "main.h"
#include <stdio.h>

/**
 * print_triangle - | starts the file
 * @size: - | var
 * Return: - | ends the file
 */

void print_triangle(int size)
{

int x, y;

if (size <= 0)
{
_putchar('\n');
}

for (x = 1; x <= size; x++)
{
for (y = 1; y <= size; y++)
{
if (x <= size - a)
{
_putchar(' ');
}
else
{
_putchar('#');
}
}
_putchar('\n');
}
}
