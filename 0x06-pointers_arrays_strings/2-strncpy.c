#include "holberton.h"

/**
 * *_strncpy - | starts the file
 * @dest: - | var
 * @src: - | var
 * @n: - | var
 * Return: - | ends the file
 */

char *_strncpy(char *dest, char *src, int n)
{

int i = 0;
int y = 0;

while (src[i] != '\0' && i < n)
{
dest[i] = src[i];
i++;
}

while (src[y] != '\0')
{
y++;
}

if (y < n)
{
dest[i] = '\0';
}

return (dest);
}
