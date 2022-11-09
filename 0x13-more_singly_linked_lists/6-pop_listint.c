#include "lists.h"

/**
 * pop_listint - function
 * @head: list var
 * Return: n/a
 */

void pop_listint(listint_t *head)
{
listint_t *final;
int x;

if (head == NULL)
{
return (0);
}


final = *head;
x = (*head)->n;
*head = (*head)->next;

free(final);

return (x);
}
