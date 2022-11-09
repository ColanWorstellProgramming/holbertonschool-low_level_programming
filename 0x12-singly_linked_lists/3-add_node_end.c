#include "lists.h"

/**
 * add_node_end - function
 * @head: list var
 * @str: str var
 * Return: address or null
 */

list_t *add_node_end(list_t **head, const char *str)
{

list_t *final, *end;

if (str == NULL)
{
return (NULL);
}
final = malloc(sizeof(list_t));
if (final == NULL)
{
return (NULL);
}
final->str = strdup(str);
if (final->str == NULL)
{
free(final);
return (NULL);
}

final->len = strlen(final->str);
final->next = NULL;

if (*head == NULL)
{
*head = final;
return (final);
}

end = *head;
while (end->next)
{
end = end->next;
}
end->next = final;

return (final);
}
