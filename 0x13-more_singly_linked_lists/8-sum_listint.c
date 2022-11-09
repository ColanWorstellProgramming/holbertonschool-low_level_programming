#include "lists.h"

/**
 * sum_listint - function
 * @head: list var
 * Return: n/a
 */

int sum_listint(listint_t *head)
{
int x = 0;

while (head)
{
	x += head->n;
	head = head->next;
}

return (x);
}
