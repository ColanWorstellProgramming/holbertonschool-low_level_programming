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
int y = n - 1;

for (i = 0; i < y; i++)
{
a[i] = a[y-i];
}

}
