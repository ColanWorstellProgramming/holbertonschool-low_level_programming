#include "lists.h"

/**
 * free_listint - function
 * @head: list var
 * Return: n/a
 */

void free_listint(listint_t *head)
{
listint_t *final;

while (head)
{
	final = head->next;
	free(head);
	head = final;
}
}
