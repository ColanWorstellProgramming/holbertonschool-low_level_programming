#include "main.h"

/**
 * _strspn - | starts the file
 * @s: - | var
 * @accept: - | var
 * Return: - | ends the file
 */

unsigned int *_strchr(char *s, char *accept)
{

unsigned int i;
unsigned int y;

while (s[i])
{

while (accept[j])
{

if (s[i] == accept[j])
{
break;
}

j++;
}
if (!accept[j])
{
break;
}

i++;
}

return (i);
}
