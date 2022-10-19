#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * *_calloc - | starts the file
 * @nmemb: - | var
 * @size: - | var
 * Return: | ends the file
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

char *mem;
unsigned int x;

if (nmemb == 0 || size == 0)
{
return (NULL);
}
mem = malloc(nmemb * size);
if (mem == NULL)
{
return (NULL);
}
for (x = 0; x < nmemb * size; x++)
{
mem[x] = 0;
}
return (mem);
}
