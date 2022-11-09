#include "lists.h"

/**
 * add_node - function
 * @head: list var
 * @str: str var
 * Return: address or null
 */

list_t *add_node(list_t **head, const char *str)
{
char copy;
list_t final;
if (str == NULL)
{
return (NULL);
}
copy = strdup(str);
final->str = copy;
return (final);
}
