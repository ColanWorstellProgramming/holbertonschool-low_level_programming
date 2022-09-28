#include "main.h"
#include <stdio.h>

/**
 * rev_string - | starts the file
 * @s: - | var
 * Return: - | ends the file
 */

void rev_string(char *s)
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
