#include "lists.h"

/**
 * get_nodeint - function
 * @head: list var
 * @index: var
 * Return: n/a
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int num;

for (num = 0; num < index; num++)
{
if (head == NULL)
{
	return (NULL);
}
head = head->next;
}

return (head);
}
