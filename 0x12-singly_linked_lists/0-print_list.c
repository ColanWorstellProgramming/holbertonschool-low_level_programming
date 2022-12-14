#include "lists.h"

/**
 * print_list - function
 * @h: list var
 * Return: node count
 */

size_t print_list(const list_t *h)
{
size_t num = 0;
while (h)
{
if (h->str != NULL)
{
printf("[%d] %s\n", h->len, h->str);
num++;
h = h->next;
}
else
{
printf("[0] (nil)\n");
num++;
h = h->next;
}

}
return (num);
}
