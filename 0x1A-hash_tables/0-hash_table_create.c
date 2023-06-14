#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash tables
 * @size: the size of array
 * Return: NULL if error else,
 * return pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hasht;

	if (size < 1)
		return (NULL);

	hasht = malloc(sizeof(hash_table_t));

	if (hasht == NULL)
		return (NULL);

	hasht->size = size;
	hasht->array = calloc(size, sizeof(hash_node_t *));

	if (hasht->array == NULL)
	{
		free(hasht);
		return (NULL);
	}

	return (hasht);
}
