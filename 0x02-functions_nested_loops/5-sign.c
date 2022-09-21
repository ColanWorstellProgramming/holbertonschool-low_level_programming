#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * print_sign - | starts file
 * @n: - | int
 * Return: - | ends file
 */

int print_sign(int n)
{

if (n > 0)

printf('+');

return (1);

else if (n == 0)

printf('0');

return (0);

else

printf('-');

return (-1);

}
