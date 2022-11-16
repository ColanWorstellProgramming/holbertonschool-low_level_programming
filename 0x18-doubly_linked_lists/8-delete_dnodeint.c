#include "lists.h"

/**
 * delete_dnodeint_at_index - main function
 * @head: var
 * @index: var
 * Return: dlistint_t
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{

dlistint_t temp, temp2;
unsigned int counter = 0;

while (head && counter < index)
{

if (head == NULL)
{
return (-1);
}
else
{
counter++;
head = head->next;
}
}

temp = head->prev;
temp2 = head->next;

temp2->prev = temp->prev;
temp->next = temp2->next;

free(head);

return (1);

}
