#include "main.h"
#include <stdio.h>

/**
 * puts_half - | starts the file
 * @str: - | var
 * Return: - | ends the file
 */

void puts_half(char *str)
{

int y = 0;
int n;

if (str[0] != '\0')
{

while (str[y] != '\0')
{
y++;
}

if (y % 2 != 0)
{
n = ((y - 1) / 2);
}
else
{
n = y;
}

int i;

for (i = 0; i < n; i++)
{
putchar(str[i]);
}

}

}
