#include "main.h"

/**
 * _strspn - | starts the file
 * @s: - | var
 * @accept: - | var
 * Return: - | ends the file
 */

unsigned int _strspn(char *s, char *accept)
{

unsigned int i = 0;
int x = 0
int y = 0;

while (accept[x])
{

while ((s[y] >= 'a' && s[y] <= 'z') || (s[y] >= 'A' && s[y] <= 'Z'))
{

if (s[y] == accept[x])
{
i++;
}

y++;
}

x++;
}

s = i;

return (s);
}
