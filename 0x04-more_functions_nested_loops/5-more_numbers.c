#include "main.h"
#include <stdio.h>

/**
 * more_numbers - | starts the file
 * Return: - | ends the file
 */

void more_numbers(void)
{

int e;

for (e = 0; e < 10; e++)

{

int i;
int x = 48;
int y = 0;
int z = 0;
int flagz = 0;

for (i = 0; i < 15; i++)
{
if (z == 9)
{
flagz = 1;
}

int b = x + z;
_putchar(b);
if (flagz == 0)
{
z++;
}
else
{
z = 1;
}

if (i > 9)
{
int a = x + y;
_putchar(a);
y++;
}
}

_putchar('\n');

}

}
