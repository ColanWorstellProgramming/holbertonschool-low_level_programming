#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - | starts the file
 * @s1: - | var
 * @s2: - | var
 * Return: - |
 */

char *str_concat(char *s1, char *s2)
{
char *y;
int i, x;

if (s1 == NULL)
{
s1 = ("");
}
if (s2 == NULL)
{
s2 = ("");
}

y = malloc(_strlen(s1) + _strlen(s2) + 1);
if (y == NULL)
{
return (NULL);
}
for (i = 0; i < _strlen(s1); i++)
{
y[i] = s1[i];
}
for (x = 0; x <= _strlen(s2); x++)
{
y[i + x] = s2[x];
}
return (y);
}

/**
 * _strlen - | starts the file
 * @s: - | var
 * Return: - |
 */

int _strlen(char *s)
{
int len = 0;

while (*s)
{
s++;
len++;
}

return (len);
}
