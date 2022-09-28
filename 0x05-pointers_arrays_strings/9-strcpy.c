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

int i = 0;

while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}

dest[i] = '\0';

return (dest);
}
