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
int i;

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
n = (y / 2);
}

for (i = n; i < y; i++)
{
putchar(str[i]);
}

}
putchar('\n');
}
