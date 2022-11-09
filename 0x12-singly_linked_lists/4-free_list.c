#include "lists.h"

/**
 * free_list - function
 * @head: list var
 * Return: n/a
 */
void free_list(list_t *head)
{
list_t *final;

while (head)
{
final = head->next;
free(head->str);
free(head);
head = final;
}
}
