#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - | starts the file
 * @a: - | var
 * @size: - | var
 * Return: - | ends the file
 */

void print_diagsums(int *a, int size)
{

int i;
int x = 0;
int y = 0;

for (i = 0; i < size; i++)
{
x = x + a[(size + 1) * i];
y = y + a[(size - 1) * (i + 1)];
}

printf("%d, %d\n", x, y);

}
