#include "holberton.h"

/**
 * *_strncat - | starts the file
 * @dest: - | var
 * @src: - | var
 * @n: - | var
 * Return: - | ends the file
 */

char *_strncat(char *dest, char *src, int n)
{

int i = 0;
int x = 0;
int y = 0;

while (dest[i] != '\0')
{
x++;
}

while (src[i] != '\0' && i < n)
{
dest[x+i] = src[i];
i++;
}

while (src[y] != '\0')
{
y++
}

if (y < n)
{
dest[x+i] = '\0';
}

return (dest);
}
