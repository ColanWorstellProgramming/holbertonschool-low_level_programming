#include "holberton.h"

/**
 * string_toupper - | starts the file
 * @s: - | var
 * Return: - | ends the file
 */

char *string_toupper(char *s)
{

int i = 0;

while (s[i] != '\0')
{
if (s[i] > 96 && s[i] < 123)
{
s[i] = s[i] - 32;
}
i++;
}
return (s);
}
