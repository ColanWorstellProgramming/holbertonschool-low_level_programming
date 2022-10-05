#include "main.h"

/**
 * _strpbrk - | starts the file
 * @s: - | var
 * @accept: - | var
 * Return: - | ends the file
 */

unsigned int *_strpbrk(char *s, char *accept)
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

if (accept[y])
{
return (s + x);
}

}

return (0);
}
