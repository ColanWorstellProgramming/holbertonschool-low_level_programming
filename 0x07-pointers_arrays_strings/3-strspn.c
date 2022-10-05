#include "main.h"

/**
 * _strspn - | starts the file
 * @s: - | var
 * @accept: - | var
 * Return: - | ends the file
 */

unsigned int *_strspn(char *s, char *accept)
{

unsigned int i;
int x = 0
int y = 0;

while (s[x])
{

while (accept[y])
{

if (s[x] == accept[y])
{
i++;
}

y++;
}

x++;
}

return (i);
}
