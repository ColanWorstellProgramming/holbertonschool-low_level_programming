#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - | starts the file
 * @n: - | var
 * Return: - | ends the file
 */

void print_diagonal(int n)
{

int x = 0;
int y = n - 1;

if (n <= x)
{
_putchar('\n');
}
else if (n > 0)
{
while (x < y)
{
_putchar(' ');
x++;
}
_putchar('\\');
_putchar('\n');
}
}
