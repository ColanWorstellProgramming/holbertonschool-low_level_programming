#include "main.h"
#include <stdio.h>

/**
 * puts2 - | starts the file
 * @str: - | var
 * Return: - | ends the file
 */

void puts2(char *str)
{

int y = 0;
int or = 0;

if (str[0] != '\0')
{

while (str[y] != '\0')
{

if (or == 0)
{
putchar(str[y]);
or = 1;
} else if (or == 1)
{
or = 0;
}
}

putchar('\n');
}
