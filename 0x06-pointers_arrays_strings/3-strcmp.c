#include "holberton.h"

/**
 * _strcmp - | starts the file
 * @s1: - | var
 * @s2: - | var
 * Return: - | ends the file
 */

int _strcmp(char *s1, char *s2)
{

int i = 0;
int x = 0;

while (s1 != '\0')
{
i++;
}

while (s2 != '\0')
{
x++;
}

if (i < x)
{
return (i - x);
}
else if (i > x)
{
return (x - i);
}
else
{
return (0);
}

}
