#include "main.h"

/**
 * _strstr - | starts the file
 * @haystack: - | var
 * @needle: - | var
 * Return: - | ends the file
 */

char *_strstr(char *haystack, char *needle)
{

unsigned int x = 0;
unsigned int y = 0;

while (haystack[x])
{

while (needle[y] && haystack[x] == needle[0])
{

if (haystack[x + y] == needle[y])
{
y++;
}
else
{
break;
}
}
if (needle[y])
{
x++;
y = 0;
}
else
{
return (haystack + x);
}
}
return (0);
}
