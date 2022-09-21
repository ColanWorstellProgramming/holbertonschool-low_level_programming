#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * print_last_digit - | starts file
 * @n: - | int
 * Return: - | ends file
 */

int print_last_digit(int n)
{

int x = n % 10;

if (n < 0)
{

n = -1;

}

_putchar(x + '0');

return (x);

}
