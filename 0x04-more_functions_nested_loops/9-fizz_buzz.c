#include "main.h"
#include <stdio.h>

/**
 * main - | starts the file
 * Return: - | ends the file
 */

int main(void)
{

int i;

if (i < 0)
{
_putchar(' ');
}
else
{
for (i = 1; i < 101; i++)
{

if ((i % 15) == 0)
{
_putchar('x');
_putchar(' ');
}
if ((i % 3) == 0)
{
_putchar('f');
_putchar(' ');
}
if ((i % 5) == 0)
{
_putchar('b');
_putchar(' ');
}
else
{
_putchar("%i", i);
_putchar(' ');
}
}

_putchar('\n');
}
return (0);
}
