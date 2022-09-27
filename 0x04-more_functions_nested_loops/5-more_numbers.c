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

for ( i = 0; i < 15; i++)
{
if ( i >= 10 )
{
_putchar(x + y);
y++;
}
else
{
_putchar(x + i);
}
}
_putchar('\n');
}
