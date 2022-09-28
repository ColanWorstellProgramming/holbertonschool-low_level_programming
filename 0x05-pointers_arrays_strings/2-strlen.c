#include "main.h"
#include <stdio.h>

/**
 * _strlen - | starts the file
 * @s: - | var
 * Return: - | ends the file
 */

int _strlen(char *s)
{

int i = 0;
int x = 0;
char max = s[0];

while (max != '\0')
{
x++;
max = s[i++];
}
return (max);
}
