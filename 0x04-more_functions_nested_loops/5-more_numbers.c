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

for (i = 0; i < 15; i++)
{
if (i >= 10)
{
int a = x + y;
_putchar(a);
y++;
}
else
{
int b = x + i;
_putchar(b);
}
}
_putchar('\n');
}
