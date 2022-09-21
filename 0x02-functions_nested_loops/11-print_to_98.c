#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * print_to_98 - | starts file
 * @n: - | int
 * Return: - | ends file
 */

void print_to_98(int n)
{

if (n <= 98)
{

while (n <= 98)
{
if ((n + 1) >= 98)
{
printf("%d", n);
}
else
printf("%d, ", n);
n++;
}

}

else

while (n >= 98)
{
if ((n - 1) <= 98)
{
printf("%d", n);
}
else
printf("%d, ", n);
n--;

}

}
