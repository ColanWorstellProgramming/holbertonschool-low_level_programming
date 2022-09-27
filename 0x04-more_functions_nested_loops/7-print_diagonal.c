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
int y = 0;

if (n <= 0)
{
_putchar('\n');
}
else
{

_putchar('\\');

while (y < n)
{
for (x = 0; x < n; x++)
{
_putchar(' ');
}
_putchar('\\');
y++;
}
_putchar('\n');
}
}
