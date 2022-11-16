#include "lists.h"

/**
 * get_dlistint_at_index - main function
 * @head: var
 * @index: var
 * Return: dlistint_t
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

int counter = 0;

while (head && counter <= index)
{

if (head == NULL)
{
return (NULL);
}
counter++;
head = head->next;
}

return (head);

}
