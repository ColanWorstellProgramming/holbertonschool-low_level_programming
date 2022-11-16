#include "lists.h"

/**
 * add_dnodeint_end - main function
 * @head: var
 * @n: var
 * Return: dlistint_t
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

dlistint_t *new = malloc(sizeof(dlistint_t));
dlistint_t *temp = *head;

if (new == NULL)
{
return (NULL);
}

if (*head == NULL)
{
return (NULL);
}

while(temp->next != NULL)
{
temp = temp->next;

if (temp->next == NULL)
{
new->n = n;
new->prev = temp->prev;
new->next = NULL;
temp->next = new;
}
}

*head = temp;

return (new);
}
