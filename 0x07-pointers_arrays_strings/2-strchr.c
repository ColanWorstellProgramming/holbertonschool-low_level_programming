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

while (s != '\0')
{
if (s[i] == c)
{
return (s[i]);
}
i++;
}

return ('\0');
}
