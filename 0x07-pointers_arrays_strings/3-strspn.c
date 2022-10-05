#include "main.h"

/**
 * _strspn - | starts the file
 * @s: - | var
 * @accept: - | var
 * Return: - | ends the file
 */

unsigned int _strspn(char *s, char *accept)
{

unsigned int x;
unsigned int y;

for (x = 0; s[x]; x++)
{

for (y = 0; accept[y]; y++)
{

if (s[x] == accept[y])
{
break;
}

}

if (!accept[y])
{
break;
}

}

return (x);
}
