#ifndef h
#define h
#undef h

#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct choice - Structure
 * @option: var
 * @func: var
 */

typedef struct choiceStruct
{
	char choice1;
	void (*func)(va_list);
} choiceStruct;

#endif
