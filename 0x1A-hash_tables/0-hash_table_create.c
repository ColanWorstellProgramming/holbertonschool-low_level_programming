#include "hash_tables.h"

/**
 * hash_table_create - main function
 * @size: var
 * Return: hash_table_t
 */

hash_table_t *hash_table_create(unsigned long int size)
{

hash_table_t *ht;
hash_node_t **hn;
unsigned long int i;

ht = malloc(sizeof(hash_table_t));
hn = malloc(sizeof(hash_node_t *) * size);

for (i = 0; i < size; i++)
{
hn[i] = NULL;
}

ht->size = size;
ht->array = hn;

return (ht);
}
