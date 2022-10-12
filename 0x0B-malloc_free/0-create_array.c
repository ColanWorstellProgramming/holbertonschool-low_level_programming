#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - | starts the file
 * @size: - | var
 * @c: - | var
 * Return: - |
 */

char *create_array(unsigned int size, char c)
{

char *y;
unsigned int i;

if (size == 0)
{
return (NULL);
}
else
{
y = malloc(size * 1);
if (y == NULL)
{
return (NULL);
}
else
for (i = 0; i < size; i++)
{
y[i] = c;
}
}
return (y);
}
