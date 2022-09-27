#include "main.h"
#include <stdio.h>

/**
 * more_numbers - | starts the file
 * Return: - | ends the file
 */

void more_numbers(void)
{

int i;
int x = 48;
int y = 0;
int z = 0;

for (i = 0; i < 15; i++)
{
if (z == 10)
{
z = 0;
}
else
{
int b = x + z;
_putchar(b);
z++;
}
if ( i > 9)
{
int a = x + y;
_putchar(a);
y++;
}
}
_putchar('\n');
}
