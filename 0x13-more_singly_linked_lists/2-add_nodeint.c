#include "lists.h"

/**
 * add_nodeint - function
 * @head: list var
 * @n: var
 * Return: node count
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *final;

final = malloc(sizeof(listint_t));
if (final == NULL)
{
	return (NULL);
}

final->n = n;
final->next = *head;
*head = final;

return (final);
}
