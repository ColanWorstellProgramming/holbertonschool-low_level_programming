#include "holberton.h"

/**
 * _strcmp - | starts the file
 * @s1: - | var
 * @s2: - | var
 * Return: - | ends the file
 */

char _strcmp(char *s1, char *s2)
{

if (*s1 < *s2)
{
return (*s1 - *s2);
}
else if (*s1 > *s2)
{
return (*s2 - *s1);
}
else
{
return (0);
}

return (0);

}
