#include "main.h"
#include <stdio.h>

/**
 * _puts - | starts the file
 * @str: - | var
 * Return: - | ends the file
 */

void _puts(char *str)
{

int i = 0;

while (str[i] != '\0')
{
putchar(str[i]);
i++;
}
putchar('\n');
}
