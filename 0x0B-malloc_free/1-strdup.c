#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - | starts the file
 * @str: - | var
 * Return: - |
 */

char *_strdup(char *str)
{
char *y;
int i;

if (str == NULL)
return (NULL);

y = malloc(_strlen(str) + 1);
if (y == NULL)
return (NULL);
for (i = 0; i < _strlen(str); i++)
{
y[i] = str[i];
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
