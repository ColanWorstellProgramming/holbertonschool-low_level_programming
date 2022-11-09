#include "lists.h"

/**
 * pop_listint - function
 * @head: list var
 * Return: n/a
 */

void pop_listint(listint_t **head)
{
listint_t *final;
int x;

if (*head == NULL)
{
return (0);
}


final = *head;
*head = final->next;
x = final->n;

free(final);

return (x);
}
