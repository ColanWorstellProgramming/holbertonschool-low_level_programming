#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>

/**
 * print_numbers - main
 * @separator: var
 * @n: var
 *
 * Return: returns
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	va_start(num, n);

	if (n > 0)
	{
	if (seperator != NULL)
	{
	for (i = 0; i < (n - 1); i++)
	{
	printf(%d%s, va_arg(numbers, unsigned int));
	}
	else
	{
	for (i = 0; i < n; i++)
	{
	printf("%d", va_arg(num, unsigned int));
	}
	}
	printf("\n");
	va_end(num);
	}
	}
}
