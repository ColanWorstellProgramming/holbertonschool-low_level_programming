#include "main.h"
#include <stdio.h>

/**
 * print_rev - | starts the file
 * @s: - | var
 * Return: - | ends the file
 */

void print_rev(char *s)
{

int y = 0;

if (s[0] != '\0')
{

while (s[y] != '\0')
{
y++;
}

while (y >= 0)
{
if (s[y] != '\0')
{
putchar(s[y]);
y--;
}
else
{
y--;
}
}

}
putchar('\n');
}
