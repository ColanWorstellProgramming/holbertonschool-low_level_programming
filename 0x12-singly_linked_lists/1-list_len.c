#include "lists.h"

/**
 * list_len - function
 * @h: list var
 * Return: node count
 */

size_t list_len(const list_t *h)
{
size_t num = 0;
while (h)
{
if (h->str != NULL)
{
num++;
h = h->next;
}
else
{
num++;
h = h->next;
}

}
return (num);
}
