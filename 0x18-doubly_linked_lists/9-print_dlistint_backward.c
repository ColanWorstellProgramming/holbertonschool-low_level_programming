#include "lists.h"

/**
 * print_dlistint_backward - main function
 * @h: var
 * Return: size_t
 */

size_t print_dlistint_backward(const dlistint_t *h)
{

size_t count = 0;
size_t max;

while (h)
{
count++;
if (h->next != NULL)
{
h = h->next;
}
}
max = count;
while (count > 0)
{
printf("%d\n", h->n);
count--;
if (h->prev != NULL)
{
h = h->prev;
}
}

return (max);
}
