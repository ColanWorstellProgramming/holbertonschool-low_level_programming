#include "main.h"
#include <stdio.h>

/**
 * *_strcat - | starts the file
 * @dest: - | var
 * @src: - | var
 * Return: - | ends the file
 */

char *_strcat(char *dest, char *src)
{

int i = 0;
int x = 0;

while (dest[i] != '\0')
{
x++;
}

while (src[i] != '\0')
{
dest[x+i] = src[i];
i++;
}

dest[i] = '\0';

return (dest);
}
