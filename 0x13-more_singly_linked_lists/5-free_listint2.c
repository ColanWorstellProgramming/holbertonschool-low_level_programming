#include "lists.h"

/**
 * free_listint2 - function
 * @head: list var
 * Return: n/a
 */

void free_listint2(listint_t **head)
{
listint_t *final;

if (head == NULL)
{
return;
}

while (head)
{
	final = (*head);
	(*head) = (*head)->next;
	free(head);
}

}
