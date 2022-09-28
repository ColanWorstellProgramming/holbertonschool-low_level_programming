#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - | starts the file
 * @dest: - | var
 * @src: - | var
 * Return: - | ends the file
 */

char *_strcpy(char *dest, char *src)
{

int i;

for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}

return (dest);
}
