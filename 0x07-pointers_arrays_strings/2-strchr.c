#include "main.h"

/**
 * _strchr - | starts the file
 * @s: - | var
 * @c: - | var
 * Return: - | ends the file
 */

char *_strchr(char *s, char c)
{

int i = 0;

while (s[i])
{
if (s[i] == c)
{
return (s);
}
i++;
}

return (s);
}
