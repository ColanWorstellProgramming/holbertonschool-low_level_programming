#include "main.h"

/**
 * malloc_checked - | starts the file
 * @b: - | var
 * Return: | ends the file
 */

void *malloc_checked(unsigned int b)
{

void *mem;

mem = malloc(b);

if (mem == NULL)
{
exit(98);
}
else
{
return (mem);
}
}
