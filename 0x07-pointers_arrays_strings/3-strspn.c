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
unsigned int y;

while (s[i])
{

while (accept[y])
{

if (s[i] == accept[y])
{
break;
}

y++;
}
if (!accept[y])
{
break;
}

i++;
}

return (i);
}
