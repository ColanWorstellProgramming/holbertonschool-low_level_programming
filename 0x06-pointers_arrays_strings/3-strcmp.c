#include "holberton.h"

/**
 * _strcmp - | starts the file
 * @s1: - | var
 * @s2: - | var
 * Return: - | ends the file
 */

int _strcmp(char *s1, char *s2)
{

int x = 0;
int y = 0;

while (s1 != '\0')
{
x++;
}

while (s2 != '\0')
{
y++;
}

if (x < y)
{
return (x - y);
}
else if (x > y)
{
return (x - y);
}
else
{
return (0);
}

}
