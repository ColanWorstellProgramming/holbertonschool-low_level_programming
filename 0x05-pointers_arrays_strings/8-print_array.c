#include "main.h"
#include <stdio.h>

/**
 * print_array - | starts the file
 * @a: - | var
 * @n: - | var
 * Return: - | ends the file
 */

void print_array(int *a, int n)
{

int x;
int i = 0;

while (i < n)
{

x = *a[i];

printf("%i", x)

}
putchar('\n');
}
