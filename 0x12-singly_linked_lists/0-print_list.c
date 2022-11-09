#include "lists.h"
#include <stdio.h>

/**
 * print_list - function
 * @h: list var
 * Return: node count
 */

size_t print_list(const list_t *h)
{

int num = 0;

while (h)
{

	if (h->str == NULL)
	{
		printf("[0] (nil)");
	}
	else
	{
		printf("[%d] %s\n", str->len, h->str);
		num++;
		h = h->next;
	}
return (num);
}
}
