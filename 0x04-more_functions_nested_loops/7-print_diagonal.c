#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - | starts the file
 * @n: - | var
 * Return: - | ends the file
 */

void print_diagonal(int n)
{

int x;
int y;

if (n <= 0)
{
_putchar('\n');
}
else
{

for (y = 0; y < n; y++)
{

for (x = 0; x < n; x++)
{

_putchar(' ');

}

_putchar('\\');
_putchar('\n');

}

}

}
