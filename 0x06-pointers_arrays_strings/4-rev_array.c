#include "holberton.h"

/**
 * reverse_array - | starts the file
 * @a: - | var
 * @n: - | var
 * Return: - | ends the file
 */

void reverse_array(int *a, int n)
{

int i;
int y = n;

for (i = 0; i < a[n]; i++)
{
a[i] = a[y];
y--;
}

}
