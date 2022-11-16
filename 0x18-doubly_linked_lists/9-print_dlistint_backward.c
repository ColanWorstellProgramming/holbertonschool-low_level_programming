#include "lists.h"

/**
 * print_dlistint_backward - main function
 * @h: var
 * Return: size_t
 */

size_t print_dlistint_backward(const dlistint_t *h)
{

size_t count = 0;

if (!h)
{
return (0);
}

while (h->next != NULL)
{
h = h->next;
count++;
}
while (count > 0)
{
printf("%d\n", h->n);
h = h->prev;
}

return (count);
}
