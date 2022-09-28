#include "main.h"
#include <stdio.h>

/**
 * swap_int - | starts the file
 * @a: - | var
 * @b: - | var
 * Return: - | ends the file
 */

void swap_int(int *a, int *b)
{

int *x = *a;
*a = &b;
*b = &x;

}
