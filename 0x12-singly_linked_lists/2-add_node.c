#include "lists.h"

/**
 * add_node - function
 * @head: list var
 * @str: str var
 * Return: address or null
 */

list_t *add_node(list_t **head, const char *str)
{
char *copy;
list_t *final;
int l;

if (str == NULL)
{
return (NULL);
}
final = malloc(sizeof(list_t));
if (final == NULL)
{
return (NULL);
}
copy = strdup(str);
if (copy == NULL)
{
free(final);
return (NULL);
}

for (l = 0; str[l];)
{
l++;
}
final->str = copy;
final->len = l;
final->next = *head;
*head = final;
return (final);
}
