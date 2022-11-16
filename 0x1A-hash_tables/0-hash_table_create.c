#include "hash_tables.h"

/**
 * hash_table_create - main function
 * @size: var
 * Return: hash_table_t
 */

hash_table_t *hash_table_create(unsigned long int size)
{

hash_table_t ht;

ht = malloc(sizeof(hash_table_t));

return (ht);
}
