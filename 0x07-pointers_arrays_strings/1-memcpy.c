#include "main.h"

/**
 * _memcpy - | starts the file
 * @dest: - | var
 * @src: - | var
 * @n: - | var
 * Return: - | ends the file
 */

char *_memset(char *dest, char *src, unsigned int n)
{

unsigned int i;

for (i = 0; i < n; i++)
{
*(dest + i) = *(src + i);
}

return (dest);
}
